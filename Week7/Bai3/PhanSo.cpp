#include "Bai3.h"

PhanSo::PhanSo(){
    tuso = 0;
    mauso = 0;
}

PhanSo::PhanSo(const int& x){
    tuso = x;
    mauso = 1;
}


PhanSo::PhanSo(const int& tu, const int& mau){
    tuso = tu;
    mauso = mau;
    int uc = UCLN(tuso, mauso);
    tuso = tuso / uc;
    mauso = mauso / uc;
}

int UCLN(int a, int b){
    if(a == b)
        return a;
    if(a > b){
        return UCLN(a - b, b);
    }
    else{
        return UCLN(a, b - a);
    }
}
ostream& operator<<(ostream& out, PhanSo so){
    out << so.tuso << "/" << so.mauso;
    return out;
}

PhanSo operator+(PhanSo so1, PhanSo so2){
    int tu = so1.tuso * so2.mauso + so2.tuso * so1.mauso;
    int mau = so1.mauso * so2.mauso;
    PhanSo result(tu, mau);
    return result;
}

PhanSo operator-(PhanSo so1, PhanSo so2){
    int tu = so1.tuso * so2.mauso - so2.tuso * so1.mauso;
    int mau = so1.mauso * so2.mauso;
    PhanSo result(tu, mau);
    return result;
}