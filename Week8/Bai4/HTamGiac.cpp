#include "HTamGiac.h"

HinhTamGiac::HinhTamGiac(){
    c1 = c2 = c3 = 0;
}
HinhTamGiac::HinhTamGiac(const double& c1, const double& c2, const double& c3){
    this->c1 = abs(c1);
    this->c2 = abs(c2);
    this->c3 = abs(c3);
}

double HinhTamGiac::ChuVi(){
    return c1 + c2 + c3;
}
double HinhTamGiac::DienTich(){
    double p = (c1 + c2 + c3) / 2;
    return sqrt(p * (p - c1) * (p - c2) * (p - c3));
}