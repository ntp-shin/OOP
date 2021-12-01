#include <iostream>
#include <cstring>
using namespace std;

class SinhVien{
private:
    char* mssv;
    char* hoten;
    static int sl;
public:
    SinhVien();
    SinhVien(const char* mssv, const char* hoten);
    SinhVien(const SinhVien& sv);
    ~SinhVien();
    const SinhVien& operator = (const SinhVien& sv);
    static int SoLuongSV();
    void display(){
        cout << "Ho ten: " << hoten << endl;
        cout << "MSSV: " << mssv << endl;
    }
};