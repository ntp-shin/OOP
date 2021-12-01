#include "Bai1.h"

/* Quy ước:
Khi cộng:
    year + year
    Nếu tháng > 12
        Trừ đi 12
        Cộng năm thêm 1
    Nếu ngày > 31 hay 30 hay 28 (tùy tháng)
        ngày trừ đi số ngày tương ứng
        tháng và năm +1
Khi trừ:
    year - year (âm -> TCN)
    Nếu tháng < 0
        Cộng thêm 12
        Năm -1
    Nếu ngày < 0
        Cộng thêm số ngày tương ứng (tùy tháng);
        tháng và năm -1
*/

int main(){
    Ngay n1; //1/1/1
    Ngay n2(02,10,2014); 
    Ngay n3(-10,16,2000); 
    Ngay n4(1000); 
    Ngay n5 = n2 + n3; 
    Ngay n6 = n1 + 5000; 
    Ngay n7 = 1234 + n4; 
    Ngay n8 = 190 + n6 + n7; 
    Ngay n9 = n8 - n6; 
    Ngay n10 = 12000 - n9; 

    cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl;
    cout << n5 << endl << n6 << endl << n7 << endl << n8 << endl;
    cout << n9 << endl << n10 << endl;
    if (n10 > n6)
        n10 = n2 - 1000 + n6;
    cout << n10 << endl;
}
