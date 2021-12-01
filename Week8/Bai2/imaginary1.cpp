#include "imaginary1.h"

Imaginary1::Imaginary1(){
    im = 0;
    re = 0;
}

Imaginary1::Imaginary1(const double& re, const double& im){
    this->re = re;
    this->im = im;
}

void Imaginary1::nhap(){
    double x;
    cout << "Nhap phan thuc:    ";
    cin >> x;
    re = x;

    cout << "Nhap phan ao:      ";
    cin >> x;
    im = x;
}

void Imaginary1::xuat(){
    cout << re;
    if(im > 0)
        cout << '+' << im << "i\n";
    else if(im < 0)
        cout << '-' << abs(im) << "i\n";
}


