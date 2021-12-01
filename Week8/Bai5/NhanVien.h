#pragma once
#include "CongTy.h"

class NhanVien : public CongTy{
protected:
    string name;
    string city;
public:
    NhanVien();
    NhanVien(const char* Name, const char* City);
    void xuat();
};