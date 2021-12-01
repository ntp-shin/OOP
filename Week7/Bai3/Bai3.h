#include <iostream>

using namespace std;

int UCLN(int a, int b);

class PhanSo{
private:
    int tuso;
    int mauso;
public:
    PhanSo();
    PhanSo(const int& x);
    PhanSo(const int& tu, const int& mau);
    friend PhanSo operator+(PhanSo so1, PhanSo so2);
    friend PhanSo operator-(PhanSo so1, PhanSo so2);
    friend ostream& operator<<(ostream& out, PhanSo so);
};

