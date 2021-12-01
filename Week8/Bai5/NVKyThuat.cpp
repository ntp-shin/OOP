#include "NVKyThuat.h"

NVKyThuat::NVKyThuat() : NhanVien(){
    ccN = "";
    slsk = 0;
}

NVKyThuat::NVKyThuat(const char* name, const char* city, const char* ccN, int slsk) : NhanVien(name, city){
    this->ccN = ccN;
    this->slsk = slsk;
    if(this->slsk >= 6){
        CongTy::xuatsac = addTail(CongTy::xuatsac, this);
    }
}

void NVKyThuat::xuat(){
    NhanVien::xuat();
    cout << " [" << ccN << "] ";
    cout << "So luong sang kien: " << slsk;
}