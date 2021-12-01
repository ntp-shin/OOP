#include <iostream>
#include <string>
using namespace std;

class SoNguyenLon{
private:
    string soNguyen;
    static bool isBigger(string s1, string s2);
    static string deleteZero(string so);
public:
    SoNguyenLon();
    SoNguyenLon(int so);
    SoNguyenLon(int so, int soLuong);
    static string soNguyenMax;
    friend SoNguyenLon operator-(SoNguyenLon so1, SoNguyenLon so2);
    friend SoNguyenLon operator+(SoNguyenLon so1, SoNguyenLon so2);
    friend ostream& operator<<(ostream& out, const SoNguyenLon& snl);
    void display();
};