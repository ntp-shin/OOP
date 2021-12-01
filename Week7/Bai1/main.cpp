#include "Header.h"
int SinhVien::sl = 0;

int main(){
    SinhVien sv1;
    sv1.display();
    SinhVien sv2("123", "345");
    sv2.display();
    SinhVien sv3 = sv2;
    sv3.display();
    cout << SinhVien::SoLuongSV();
    return 0;
}