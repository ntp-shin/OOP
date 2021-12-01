#pragma once
#include "NGUOI.h"

class NV : public Nguoi{
protected:
    string phongban;
    double hesoluong;
    long long phucap;
public:
    NV();
    void nhap();
    void in();
};