#include <iostream>
#include <fstream>
using namespace std;

class Ngay{
private:
    int day;
    int month;
    int year;
    int numOfDay();
public:
    Ngay();
    Ngay(int day, int month, int year);
    Ngay(int number);
    
    friend Ngay operator+(const Ngay& ng1, const Ngay& ng2);
    friend Ngay operator-(const Ngay& ng1, const Ngay& ng2);
    friend ostream& operator<<(ostream& out, const Ngay& ng);
    bool operator>(const Ngay &obj){
        if(this->year > obj.year)
            return true;
        else if(this->year < obj.year)
            return false;
        else
        {
            if(this->month < obj.month)
                return false;
            else if(this->month > obj.month)
                return true;
            else
            {
                if(this->day > obj.day)
                    return true;
                else 
                    return false;
            }
        }
    }
    void Xuat(){
        cout << day << " / " << month << " / " << year << endl;
    }
};
