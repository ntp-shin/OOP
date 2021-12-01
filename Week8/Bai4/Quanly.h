#pragma once
#include "Header.h"

class QuanLyHinhHocPhang{
private:
    double Area;
    double Perimeter;
public:
    QuanLyHinhHocPhang();
    double TongDienTich();
    double TongChuVi();

    virtual double DienTich();
    virtual double ChuVi();

    
    void Add(QuanLyHinhHocPhang* child);

};