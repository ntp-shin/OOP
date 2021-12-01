#include "HTron.h"

HinhTron::HinhTron(){
    r = 0;
}
HinhTron::HinhTron(const double& r){
    this->r = abs(r);
}
double HinhTron::ChuVi(){
    return 2 * r * 3.14;
}
double HinhTron::DienTich(){
    return r * r * 3.14;
}