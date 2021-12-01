#include "NGUOI.h"

Nguoi::Nguoi(){
    name = address = date = "";
}
void Nguoi::nhap(){
    cin.ignore();
    cout << "Nhap ten: ";
    getline(cin, name);

    cout << "Nhap ngay sinh: ";
    getline(cin, date);

    cout << "Nhap dia chi: ";
    getline(cin, address);
}

void Nguoi::in(){
    cout << "Ten:   " << name << endl;
    cout << "Ngay sinh: " << date << endl;
    cout << "Dia chi:   " << address << endl;
}