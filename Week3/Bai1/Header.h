#pragma once
#include <iostream>

using namespace std;

class HocSinh{
private:
    string name;
    int MSSV;
    double diemToan;
    double diemVan;
    double diemAnh;
    double diemTB;

    
    static int soLuongHs;
    static double diemTBCaoNhat;
    static string nameOfCaoNhat;
    static int MSSVOfCaoNhat;
public:
    HocSinh();
    HocSinh(const string& name, const double& diemToan, const double& diemVan, const double& diemAnh);

    void DatHoTen(string name);
    void GanDiem(const double& diemToan, const double& diemVan, const double& diemAnh);
    void display();

    static void HSDiemTBCaoNhat();
};
