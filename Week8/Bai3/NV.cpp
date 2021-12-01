#include "NV.h"

NV::NV() : Nguoi(){
    phongban = "";
    hesoluong = 0;
    phucap = 0;
}

void NV::nhap(){
    Nguoi::nhap();
    cout << "Nhap phong ban:    ";
    getline(cin, phongban);
    cout << "Nhap he so luong:  ";
    cin >> hesoluong;
    cout << "Nhap phu cap:      ";
    cin >> phucap;
}

void NV::in(){
    Nguoi::in();
    cout << "Phong ban: " << phongban << endl;
    cout << "He so luong:   " << hesoluong << endl;
    cout << "Phu cap:   " << phucap << endl;
}