#include "PS2.h"

PS2::PS2() : PS1(){
    dau = 0;
}
PS2::PS2(const bool& dau, const int& tu, const int& mau) : PS1(tu, mau){
    this->dau = dau;
}

ostream& operator<<(ostream& out, const PS2& so){
    if(so.dau)  out << '-';
    else        out << '+';
    out << (PS1)so;
    return out;
}

istream& operator>>(istream& in, PS2& so){
    in >> so.dau;
    int tu, mau;
    in >> tu >> mau;
    so = PS2(so.dau, tu, mau);
    return in;
}

PS2 operator+(const PS2& so1, const PS2& so2){
    int d1 = 1, d2 = 1;
    if(so1.dau)
        d1 = -1;
    if(so2.dau)
        d2 = -1;
    int tu = d1 * so1.tuso * so2.mauso + d2 * so2.tuso * so1.mauso;
    int mau = so1.mauso * so2.mauso;
    bool x = 0;
    if (tu < 0)
        x = 1;
    PS2 result(x, tu, mau);
    return result;
}

PS2 operator-(const PS2& so1, const PS2& so2){
    int d1 = 1, d2 = 1;
    if(so1.dau)
        d1 = -1;
    if(so2.dau)
        d2 = -1;
    int tu = d1 * so1.tuso * so2.mauso - d2 * so2.tuso * so1.mauso;
    int mau = so1.mauso * so2.mauso;
    bool x = 0;
    if (tu < 0)
        x = 1;
    PS2 result(x, tu, mau);
    return result;
}

PS2 operator*(const PS2& so1, const PS2& so2){
    int tu = so1.tuso * so2.tuso;
    int mau = so1.mauso * so2.mauso;
    bool x = 1;
    if (so1.dau == so2.dau)
        x = 0;
    PS2 result(x, tu, mau);
    return result;
}

PS2 operator/(const PS2& so1, const PS2& so2){
    PS2 temp(so2.dau, so2.mauso, so2.tuso);
    PS2 result = so1 * temp;
    return result;
}

bool operator>(PS2 so1, PS2 so2){
    int d1 = 1, d2 = 1;
    if(so1.dau)
        d1 = -1;
    if(so2.dau)
        d2 = -1;
    double s1 = d1 * so1.tuso * 1.0 / so1.mauso,
           s2 = d2 * so2.tuso * 1.0 / so2.mauso;
    if (s1 > s2)
        return true;
    return false;
}

bool operator==(PS2 so1, PS2 so2){
    if(so1.dau != so2.dau)
        return false;
    double s1 = so1.tuso * 1.0 / so1.mauso,
           s2 = so2.tuso * 1.0 / so2.mauso;
    if(s1 == s2)
        return true;
    return false;
}

bool operator<(PS2 so1, PS2 so2){
    if (so1 == so2)
        return false;
    if (so1 > so2)
        return false;
    return true;
}

bool operator<=(PS2 so1, PS2 so2){
    if(so1 == so2 || so1 < so2)
        return true;
    return false;
}

bool operator>=(PS2 so1, PS2 so2){
    if(so1 == so2 || so1 > so2)
        return true;
    return false;
}

PS2 operator++(PS2 &so){
    int d1 = 1;
    if(so.dau)
        d1 = -1;
    int temp = d1 * so.tuso + so.mauso;
    PS2 result(!(temp > 0), temp, so.mauso);
    so = result;
    return so;
}

PS2 operator--(PS2 &so){
    int d1 = 1;
    if(so.dau)
        d1 = -1;
    int temp = d1 * so.tuso - so.mauso;
    PS2 result(!(temp > 0), temp, so.mauso);
    so = result;
    return so;
}
