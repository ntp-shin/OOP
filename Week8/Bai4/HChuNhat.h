#pragma once
#include "Header.h"
#include "Quanly.h"

class HinhChuNhat : public QuanLyHinhHocPhang{
private:
    double length;
    double width;
public:
    HinhChuNhat();
    HinhChuNhat(const double& length, const double& width);
    double DienTich();
    double ChuVi();
};