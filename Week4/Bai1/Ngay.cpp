#include "Bai1.h"
#include <cmath>

Ngay::Ngay(){
    day = month = year = 1;
}

Ngay::Ngay(int day, int month, int year){
    // Day
    if(day < 1)
        day = abs(day);
    while(day > 31){
        day = day - 30;
        month++;
    }
    // Month
    if (month < 1)
        month = 1;
    else if (month > 12){
        month = month - 12;
        year++;
    }
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

Ngay::Ngay(int number){
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



Ngay operator+(const Ngay& ng1, const Ngay& ng2){
    int kq_day, kq_month, kq_year;
    kq_day = ng1.day + ng2.day;
    kq_month = ng1.month + ng2.month;
    kq_year = ng1.year + ng2.year;

    //Month
    if(kq_month > 12){
        kq_month -= 12;
        kq_year++;
    }
    // Day and Month
    if(kq_day > 31 && (kq_month == 1 || kq_month == 3 || kq_month == 5 || kq_month == 7 || kq_month == 8 || kq_month == 10)){
        kq_day -= 31;
        kq_month++;
    }
    if(kq_day > 30 && (kq_month == 4 || kq_month == 6 || kq_month == 9 || kq_month == 11)){
        kq_day -= 30;
        kq_month++;
    }
    if(kq_day > 28 && kq_month == 2){
        if (kq_year % 400 == 0 || (kq_year % 100 != 0 && kq_year % 4 == 0)){
            if(kq_day > 29){
                kq_day = kq_day - 29;
                kq_month++;
            }
        }
        else if(kq_day > 28){
                kq_day = kq_day - 28;
                kq_month++;
            }
    }
    if(kq_day > 31 && kq_month == 12){
        kq_day -= 31;
        kq_month = 1;
        kq_year++;
    }
    

    Ngay ng3(kq_day, kq_month, kq_year);
    return ng3;
}

Ngay operator-(const Ngay& ng1, const Ngay& ng2){
    int kq_day, kq_month, kq_year;
    kq_day = ng1.day - ng2.day;
    kq_month = ng1.month - ng2.month;
    kq_year = ng1.year - ng2.year;

    //Month
    if(kq_month < 0){
        kq_month += 12;
        kq_year--;
    }
    while (kq_day < 0){
        if(kq_month == 2 || kq_month == 4 || kq_month == 6 || kq_month == 8 || kq_month == 9 || kq_month == 11){
            kq_day += 31;
            kq_month--;
        }
        else if(kq_month == 5 || kq_month == 7 || kq_month == 10 || kq_month == 12){
            kq_day += 30;
            kq_month--;
        }
        else if(kq_month == 3){
            kq_day += 30;
            kq_month--;
        }
        else{
            kq_day += 31;
            kq_month = 12;
            kq_year--;
        }
    }
    
    Ngay ng3(kq_day, kq_month, kq_year);
    return ng3;
}

ostream& operator<<(ostream& out, const Ngay& ng){
    out << ng.day << " /" << ng.month << " /" << ng.year << endl;
    return out;
}