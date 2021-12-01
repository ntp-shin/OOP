#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class SoNguyen{
private:
    int v;
    
public:
    SoNguyen (); // Tạo ra một giá trị có giá trị bằng 0
    SoNguyen (int val); // Tạo ra một đối tượng có giá trị xác định
    int getValue (); // Trả về giá trị trong đối tượng
    static int min;
    int getMin();

    friend bool operator>(SoNguyen so1, SoNguyen so2);
    friend bool operator<(SoNguyen so1, SoNguyen so2);
    friend ostream& operator<<(ostream& out, SoNguyen so);
    friend istream& operator>>(istream& in, SoNguyen& a);
};  