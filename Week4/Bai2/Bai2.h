#include <iostream>
#include <string>

using namespace std;

class ThoiGian{
private:
    int second;
    int minute;
    int hour;
public:
    // Constructor
    ThoiGian();
    ThoiGian(int number);
    ThoiGian(const int& minute, const int& second);
    ThoiGian(const int& hour, const int& minute, const int& second);

    // Operator
    friend ThoiGian operator+(const ThoiGian& time1, const ThoiGian time2);
    friend ThoiGian operator-(const ThoiGian& time1, const ThoiGian time2);
    friend bool operator>=(const ThoiGian& time1, const ThoiGian& time2);
    friend bool operator<=(const ThoiGian& time1, const ThoiGian& time2);
    friend ostream& operator<<(ostream& out, const ThoiGian& time0);


    void Xuat();
};