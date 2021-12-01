#pragma once
#include "Quanly.h"

class HinhTamGiac : public QuanLyHinhHocPhang{
private:
    double c1, c2, c3;
public:
    HinhTamGiac();
    HinhTamGiac(const double& c1, const double& c2, const double& c3);
    double ChuVi();
    double DienTich();
};