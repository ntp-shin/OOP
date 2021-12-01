#include "Header.h"
#include "Quanly.h"
#include "HChuNhat.h"
#include "HTamGiac.h"
#include "HTron.h"
#include "HThangVuong.h"

int main(){
    QuanLyHinhHocPhang ql;
    ql.Add(new HinhChuNhat(5.6, 2.3));
    ql.Add(new HinhTamGiac(-1.5, 6.7, 5.9));
    ql.Add(new HinhTron(12.7));
    ql.Add(new HinhThangVuong(10.1, 8.6, 3.5));
    
    cout << ql.TongDienTich() << endl;
    cout << ql.TongChuVi() << endl;
    
    cout << "\n\n---> Em su dung double nen khac so thap phan";
    return 0;
}