#include "Bai3.h"

SinhVien::SinhVien() {
    stt = ++cur;
    MSSV = "xxxxxxxx";
    Name = "XxxxX";
    DateB = "xx/xx/xxxx";
    DLT = DTH = 10;
}

SinhVien::SinhVien(string MSSV) : SinhVien() {
    this->MSSV = MSSV;
}

SinhVien::SinhVien(string MSSV, string Name, double DLT, double DTH) : SinhVien() {
    this->MSSV = MSSV;
    this->Name = Name;
    this->DLT = DLT;
    this->DTH = DTH;
}

SinhVien::SinhVien(string MSSV, string Name, double DLT, double DTH, int x, int y, int z) {
    stt = ++cur;
    this->MSSV = MSSV;
    this->Name = Name;
    this->DLT = DLT;
    this->DTH = DTH;
    this->DateB = to_string(x) + '/' + to_string(y) + '/' + to_string(z);
}

SinhVien::SinhVien(string MSSV, string Name, double DLT, double DTH, Date n) {
    stt = ++cur;
    this->MSSV = MSSV;
    this->Name = Name;
    this->DLT = DLT;
    this->DTH = DTH;
    this->DateB = n.getDate();
}

SinhVien::SinhVien(const SinhVien& x) {
    stt = ++cur;
    this->MSSV = x.MSSV;
    this->Name = x.Name;
    this->DLT = x.DLT;
    this->DTH = x.DTH;
    this->DateB = x.DateB;
}
void SinhVien::display() {
    cout << stt << ". " << Name << endl;
    cout << "MSVV: " << MSSV << endl;
    cout << "Date of Birth: " << DateB << endl;
    cout << "DLT: " << DLT << " - DTH:" << DTH << endl;
    cout << " --------- " << endl;
}
