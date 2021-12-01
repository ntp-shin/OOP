#include <iostream>

using namespace std;

class Ngay{
private:
    int day;
    int month;
    int year;
public:
    Ngay(){
        day = month = year = 1;
    }
    Ngay(int day, int month, int year){
        // Day
        if(day < 1)
            day = 1;
        else if(day > 31)
            day = 31;
        // Month
        if (month < 1)
            month = 1;
        else if (month > 12)
            month = 12;
        else if (month == 4 || month == 6 || month == 9 || month == 11){
            if (day > 30)
                day = 30;
        }  
        // Year
        if(year < 1)
            year = 1;
        if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
            if(month == 2)
                if(day >= 29)
                    day = 29;
        }
        else if (month == 2)
            if (day >= 28)
                day = 28;
        // Gan
        this->day = day;
        this->month = month;
        this->year = year;
    }
    Ngay(int number){
        year = 1;
        number--;
        while (number > 365)
        {
            year++;
            number -= 365;
        }
        int temp = year / 4; // Dem xem co bn nam nhuan
        int days = number % 365 - temp; // So ngay
        day = 1;
        month = 1;
        while(days > 0){
            if(days > 30){
                day = day + 30;
                days -= 30;
            }
            else{
                day = day + days;
                days = 0;
            }
            if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
                if(day > 31){
                    day = day - 31;
                    month++;
                }
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11){
                if(day > 30){
                    day = day - 30;
                    month++;
                }
            }
            else if(month == 2){
                if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
                    if(day > 29){
                        day = day - 29;
                        month++;
                    }
                }
                else if(day > 28){
                        day = day - 28;
                        month++;
                    }
            }
            if(month > 12){
                month -= 12;
                year++;
            }

        }
    }
    void Xuat(){
        cout << day << " / " << month << " / " << year << endl;
    }
};
