#include "PS1.h"

PS1::PS1(){
    tuso = 0;
    mauso = 0;
}

PS1::PS1(const int& x){
    tuso = x;
    mauso = 1;
}
PS1::PS1(const int& tu, const int& mau){
    tuso = abs(tu);
    mauso = abs(mau);
}

//Function
void PS1::toiGian(){
    int uc = UCLN(tuso, mauso);
    tuso = tuso / uc;
    mauso = mauso / uc;
}


// Operator
ostream& operator<<(ostream& out, PS1 so){
    out << so.tuso << "/" << so.mauso;
    return out;
}

istream& operator>>(istream& in, PS1& so){
    in >> so.tuso;
    in >> so.mauso;
    return in;
}

PS1 operator+(PS1 so1, PS1 so2){
    int tu = so1.tuso * so2.mauso + so2.tuso * so1.mauso;
    int mau = so1.mauso * so2.mauso;
    PS1 result(tu, mau);
    return result;
}


int UCLN(int a, int b){
    if(a == b)
        return a;
    if(a > b)
        return UCLN(a - b, b);
    else
        return UCLN(a, b - a);
}