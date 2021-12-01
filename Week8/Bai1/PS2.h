#pragma once
#include "PS1.h"
class PS1;
class PS2 : public PS1{
private:
    bool dau;   // 1 -> am, 0 -> duong
public:
    PS2();
    PS2(const bool& dau, const int& tu, const int& mau);
    
    friend ostream& operator<<(ostream& out, const PS2& so);
    friend istream& operator>>(istream& in, PS2& so);

    friend bool operator>(PS2 so1, PS2 so2);
    friend bool operator<(PS2 so1, PS2 so2);
    friend bool operator==(PS2 so1, PS2 so2);
    friend bool operator<=(PS2 so1, PS2 so2);
    friend bool operator>=(PS2 so1, PS2 so2);

    friend PS2 operator++(PS2 &so);
    friend PS2 operator--(PS2 &so);

    friend PS2 operator+(const PS2& so1, const PS2& so2);
    friend PS2 operator-(const PS2& so1, const PS2& so2);
    friend PS2 operator*(const PS2& so1, const PS2& so2);
    friend PS2 operator/(const PS2& so1, const PS2& so2);
};