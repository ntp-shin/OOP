#pragma once
#include "NhanVien.h"

class NVKyThuat : public NhanVien{
private:
    string ccN;
    int slsk;
public:
    NVKyThuat();
    NVKyThuat(const char* name, const char* city, const char* ccN, int slsk);
    void xuat();
};