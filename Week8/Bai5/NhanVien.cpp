#include "NhanVien.h"

NhanVien::NhanVien(){
    name = city = "";
}

NhanVien::NhanVien(const char* Name, const char* City){
    name = Name;
    city = City;
}

void NhanVien::xuat(){
    cout << name << " <" << city << "> ";
}