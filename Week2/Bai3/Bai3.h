#pragma once

#include <iostream>
#include <string>
using namespace std;
static int cur = 0;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date();
    Date(int day, int month, int year);
    string getDate();
    void Xuat();
};

class SinhVien {
private:
    int stt;
    string MSSV;
    string Name;
    string DateB;
    double DLT;
    double DTH;
public:
    SinhVien();
    SinhVien(string MSSV);
    SinhVien(string MSSV, string Name, double DLT, double DTH);
    SinhVien(string MSSV, string Name, double DLT, double DTH, int x, int y, int z);
    SinhVien(const SinhVien& x);
    SinhVien(string MSSV, string Name, double DLT, double DTH, Date n);

    void display();
};

