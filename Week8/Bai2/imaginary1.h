#pragma once
#include "header.h"

class Imaginary1{
protected:
    double re;
    double im;
public:
    Imaginary1();
    Imaginary1(const double& re, const double& im);

    void nhap();
    void xuat();
};