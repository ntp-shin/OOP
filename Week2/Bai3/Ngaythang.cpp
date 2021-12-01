#include "Bai3.h"

Date::Date() {
    this->day = 1;
    this->month = 1;
    this->year = 1;
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

string Date::getDate() {
    return to_string(day) + '/' + to_string(month) + '/' + to_string(year);
}

void Date::Xuat() {
    string x = getDate();
    cout << x;
}