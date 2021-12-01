#include "Quanly.h"

QuanLyHinhHocPhang::QuanLyHinhHocPhang(){
    Area = 0;
    Perimeter = 0;
}

double QuanLyHinhHocPhang::TongChuVi(){
    return Perimeter;
}

double QuanLyHinhHocPhang::TongDienTich(){
    return Area;
}

double QuanLyHinhHocPhang::ChuVi(){
    return 0;
}

double QuanLyHinhHocPhang::DienTich(){
    return 0;
}

void QuanLyHinhHocPhang::Add(QuanLyHinhHocPhang* child){
    Perimeter += child->ChuVi();
    Area += child->DienTich();
}