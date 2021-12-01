#include "HChuNhat.h"

HinhChuNhat::HinhChuNhat(){
    length = width = 0;
}

HinhChuNhat::HinhChuNhat(const double& length, const double& width){
    this->length = abs(length);
    this->width = abs(width);
}

double HinhChuNhat::DienTich(){
    return length * width;
}

double HinhChuNhat::ChuVi(){
    return (length + width) * 2;
}