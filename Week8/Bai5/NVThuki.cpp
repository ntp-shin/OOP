#include "NVThuki.h"

NVThuKy::NVThuKy() : NhanVien(){
    ccNN = "";
    slbc = 0;
}

NVThuKy::NVThuKy(const char* name, const char* city, const char* ccNN, int slbc) : NhanVien(name, city){
    this->ccNN = ccNN;
    this->slbc = slbc;
    if(this->slbc >= 12){
        CongTy::xuatsac = addTail(CongTy::xuatsac, this);
    }
}

void NVThuKy::xuat(){
    NhanVien::xuat();
    cout << " [" << ccNN << "] ";
    cout << "Bao cao hoan thanh: " << slbc;
}