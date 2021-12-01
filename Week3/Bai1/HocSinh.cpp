#include "Header.h"

HocSinh::HocSinh(){
    name = "$$$$$$";
    diemToan = diemVan = diemAnh = diemTB = 0;
    soLuongHs++;
    MSSV = soLuongHs + 1363001;
}
HocSinh::HocSinh(const string& name, const double& diemToan, const double& diemVan, const double& diemAnh){
    this->name = name;
    this->diemToan = abs(diemToan);
    this->diemVan = abs(diemVan);
    this->diemAnh = abs(diemAnh);
    this->diemTB = (this->diemToan + this->diemVan + this->diemAnh) / 3;

    soLuongHs++;
    MSSV = soLuongHs + 1363001;
    if (diemTB > HocSinh::diemTBCaoNhat){
        nameOfCaoNhat = name;
        MSSVOfCaoNhat = MSSV;
        HocSinh::diemTBCaoNhat = diemTB;
    }
}

void HocSinh::DatHoTen(string name){
    this->name = name;
}
void HocSinh::GanDiem(const double& diemToan, const double& diemVan, const double& diemAnh){
    this->diemToan = abs(diemToan);
    this->diemVan = abs(diemVan);
    this->diemAnh = abs(diemAnh);
    this->diemTB = (this->diemToan + this->diemVan + this->diemAnh) / 3;

    if (diemTB > HocSinh::diemTBCaoNhat){
        nameOfCaoNhat = name;
        MSSVOfCaoNhat = MSSV;
        HocSinh::diemTBCaoNhat = diemTB;
    }
}
void HocSinh::display(){
    cout << "HS: " << name << ", MS: " << MSSV << ", DTB: " << diemTB << endl; 
}

void HocSinh::HSDiemTBCaoNhat(){
    cout << "HS: " << nameOfCaoNhat << ", MS: " << MSSVOfCaoNhat << ", DTB: " << diemTBCaoNhat << endl; 
}
