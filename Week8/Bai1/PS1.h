#pragma once
#include <iostream>
using namespace std;

int UCLN(int a, int b);

class PS1{
protected:
    int tuso;
    int mauso;
public:
    PS1();
    PS1(const int& x);
    PS1(const int& tu, const int& mau);

    void toiGian();
    friend PS1 operator+(PS1 so1, PS1 so2);
    friend ostream& operator<<(ostream& out, PS1 so);
    friend istream& operator>>(istream& in, PS1& so);
};