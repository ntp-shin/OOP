#pragma once
#include "NhanVien.h"

class NVThuKy : public NhanVien{
private:
    string ccNN;
    int slbc;
public:
    NVThuKy();
    NVThuKy(const char* name, const char* city, const char* ccNN, int slbc);
    void xuat();
};