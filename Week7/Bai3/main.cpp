#include "Bai3.h"


int main(){
    PhanSo ps;
    PhanSo ps1(200);
    PhanSo ps2(6, 8);
    PhanSo ps3 = ps1 + ps2;
    PhanSo ps4 = 150 + ps2;
    PhanSo ps5 = ps3 - ps4;
    PhanSo ps6 = 225 - ps2;
    cout << ps2 <<endl; 
    cout << ps3 << endl;
    cout << ps5 << endl;
    cout << ps6 << endl;
}