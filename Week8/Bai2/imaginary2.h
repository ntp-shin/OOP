#pragma once
#include "imaginary1.h"

class Imaginary2 : public Imaginary1{
public:
    friend Imaginary2 operator+(const Imaginary2& num1, const Imaginary2& num2);
    friend Imaginary2 operator-(const Imaginary2& num1, const Imaginary2& num2);
    friend Imaginary2 operator*(const Imaginary2& num1, const Imaginary2& num2);
    friend Imaginary2 operator/(const Imaginary2& num1, const Imaginary2& num2);
    Imaginary2 operator++();
    Imaginary2 operator--();

    friend ostream& operator<<(ostream& out, const Imaginary2& num);
    friend istream& operator>>(istream& in, Imaginary2& num);

    // Trong so thuc "khong co khai niem" lon hon, nho hon (>, <) 
    // Nen em chi lam = va != thoi a !
    friend bool operator==(const Imaginary2& num1, const Imaginary2& num2);
    friend bool operator!=(const Imaginary2& num1, const Imaginary2& num2);
};