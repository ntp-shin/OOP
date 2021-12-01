#include "Header.h"


SinhVien::SinhVien(){
    mssv = new char{0};
    hoten = new char{0};
    sl++;
}

SinhVien::SinhVien(const char* mssv, const char* hoten){
    this->mssv = new char[strlen(mssv) + 1];
    strcpy(this->mssv, mssv);

    this->hoten = new char[strlen(hoten) + 1];
    strcpy(this->hoten, hoten);
    sl++;
}

SinhVien::SinhVien(const SinhVien& sv){
    this->mssv = new char[strlen(sv.mssv) + 1];
    strcpy(this->mssv, sv.mssv);

    this->hoten = new char[strlen(sv.hoten) + 1];
    strcpy(this->hoten, sv.hoten);
    sl++;
}

SinhVien::~SinhVien() {
    if (hoten != NULL) 
        delete[] hoten;
    if(mssv != NULL)
        delete[] mssv;
}

const SinhVien& SinhVien::operator=(const SinhVien& sv){
    if (hoten != NULL) 
        delete[] hoten;
    if(mssv != NULL)
        delete[] mssv;
    this->mssv = new char[strlen(sv.mssv) + 1];
    strcpy(this->mssv, sv.mssv);

    this->hoten = new char[strlen(sv.hoten) + 1];
    strcpy(this->hoten, sv.hoten);
    sl++;
    return *this;

}
int SinhVien::SoLuongSV(){
    return sl;
}