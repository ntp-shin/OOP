#pragma once
#include "Quanly.h"

class HinhThangVuong : public QuanLyHinhHocPhang{
private:
    double dayLon;
    double dayBe;
    double chCao;
public:
    HinhThangVuong();
    HinhThangVuong(const double& dayLon, const double& dayBe, const double& chCao);
    double ChuVi();
    double DienTich();
};