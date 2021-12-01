#include "Header.h"
#include "CongTy.h"
#include "NhanVien.h"
#include "NVThuki.h"
#include "NVKythuat.h"

Node* CongTy::xuatsac = NULL;
int main(){
    CongTy cty;
    cty.Add(new NVThuKy("Nguyen Thi A", "Tp Ho Chi Minh", "Toefl iBT 100", 15));
    cty.Add(new NVKyThuat("Tran Van B", "Tp Ho Chi Minh", "CNTT", 8));
    cty.Add(new NVThuKy("Le Nguyen Z", "Tp Ha Noi", "TOEIC 700", 10));
    cty.Add(new NVKyThuat("Do Lan T", "Binh Duong", "Hoa thuc pham", 4));
    cty.Add(new NVKyThuat("Hoang Van D", "Khanh Hoa", "Dien tu", 10));
    cty.Add(new NVThuKy("Ngo E", "Tp Ha Noi", "IELTS 7.0", 12));
    
    cout << "\nDS Nhan vien trong cong ty:" << endl;
    cty.DanhSachNV();
    cout << endl << "DS Nhan vien xuat sac:" << endl;
    cty.DSXuatSac();
    return 0;
}