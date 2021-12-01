#include "imaginary2.h"

ostream& operator<<(ostream& out, const Imaginary2& num){
    out << num.re;
    if(num.im > 0)
        out << '+' << num.im << "i";
    else if(num.im < 0)
        out << '-' << abs(num.im) << "i";
    return out;
}

istream& operator>>(istream& in, Imaginary2& num){
    in >> num.re;
    in >> num.im;
    return in;
}

Imaginary2 operator+(const Imaginary2& num1, const Imaginary2& num2){
    Imaginary2 result;
    result.re = num1.re + num2.re;
    result.im = num1.im + num2.im;
    return result;
}

Imaginary2 operator-(const Imaginary2& num1, const Imaginary2& num2){
    Imaginary2 result;
    result.re = num1.re - num2.re;
    result.im = num1.im - num2.im;
    return result;
}

Imaginary2 operator*(const Imaginary2& num1, const Imaginary2& num2){
    Imaginary2 result;
    result.re = num1.re * num2.re - num1.im * num2.im;
    result.im = num1.re * num2.im + num1.im * num2.re;
    return result;
}

Imaginary2 operator/(const Imaginary2& num1, const Imaginary2& num2){
    Imaginary2 result;
    result.re = (num1.re * num2.re + num1.im * num2.im) / (num2.re * num2.re + num2.im * num2.im);
    result.im = (num2.re * num1.im - num2.im * num1.re) / (num2.re * num2.re + num2.im * num2.im);
    return result;
}

Imaginary2 Imaginary2::operator++(){
    re++;
    return *this;
}

Imaginary2 Imaginary2::operator--(){
    re--;
    return *this;
}

bool operator==(const Imaginary2& num1, const Imaginary2& num2){
    if(num1.re != num2.re)
        return false;
    if(num1.im != num2.im)
        return false;
    return true;
}

bool operator!=(const Imaginary2& num1, const Imaginary2& num2){
    if(num1 == num2)
        return false;
    return true;
}