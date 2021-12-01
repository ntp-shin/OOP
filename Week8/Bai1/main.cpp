#include "PS1.h"
#include "PS2.h"

int main(){
// So khong dau PS1
    PS1 a, b, c;
    cout << "\t 1. Tinh toan voi so KHONG dau \n";
    cout << "Nhap: (tu) + (space) + (mau) \n \n";
    cout << "Phan so thu 1: ";
    cin >> a;
    cout << "Phan so thu 2: ";
    cin >> b;
    cout << "==> Tong 2 phan so la:  ";
    c = a + b;
    c.toiGian();
    cout << c << endl;

// So co dau PS2
    PS2 x, y, z;
    cout << "\n \n \t 2. Tinh toan voi so CO dau \n";
    cout << "Dau: 0 -> duong ___ 1 -> am \n";
    cout << "Nhap: (dau) + (space) + (tu) + (space) + (mau) \n \n";
    cout << "Phan so thu 1: ";
    cin >> x;
    cout << "Phan so thu 2: ";
    cin >> y;
    if (x == y)
        cout << "Hai phan so BANG NHAU";
    else if (x > y)
        cout << "Phan so 1 > Phan so 2";
    else    
        cout << "Phan so 1 < Phan so 2";

}