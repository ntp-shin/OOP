#pragma once
#include "Quanly.h"

class HinhTron : public QuanLyHinhHocPhang{
private:
    double r;
public:
    HinhTron();
    HinhTron(const double& r);
    double ChuVi();
    double DienTich();
};