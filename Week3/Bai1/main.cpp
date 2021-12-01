#include "Header.h"

int HocSinh::soLuongHs = 0;
double HocSinh::diemTBCaoNhat = 0;
string HocSinh::nameOfCaoNhat = "";
int HocSinh::MSSVOfCaoNhat = 0;

int main(){
    HocSinh mangHS[50];
    HocSinh hs1;
    hs1.DatHoTen("Nguyen Van A");
    hs1.GanDiem(7, 8, 10);
    hs1.display();
    HocSinh hs2("Tran Thi B", 5, 8, 4.5);
    HocSinh hs3("Hoang Thi C", -9.5, 8.5, 4.5);
    HocSinh hs4("Le Van D", 7.5, 9, -10);
   
    hs2.display();
    hs3.display();
    hs4.display();

    cout << "Hoc sinh co diem TB cao nhat:" << endl;
    HocSinh::HSDiemTBCaoNhat();
    return 0;
}