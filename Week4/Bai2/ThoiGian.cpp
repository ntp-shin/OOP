#include "Bai2.h"

ThoiGian::ThoiGian(){
    second = minute = hour = 0;
}
ThoiGian::ThoiGian(int number){
    int num = number;
    if(num <= 0){
        hour = minute = second = 0;
    }
    else{    
        hour = num / 3600;
        num = num % 3600;
        minute = num / 60;
        second = num % 60;
    }
}
ThoiGian::ThoiGian(const int& minute, const int& second){
    int min = abs(minute), sec = abs(second);

    this->second = sec % 60;
    min += sec / 60;
    this->minute = min % 60;
    this->hour = min / 60;
}
ThoiGian::ThoiGian(const int& hour, const int& minute, const int& second){
    int hor = abs(hour), min = abs(minute), sec = abs(second);
    // Second
    this->second = sec % 60;
    min += sec / 60;

    // Minute
    this->minute = min % 60;
    hor += min / 60;

    // Hour
    this->hour = hor;
}
void ThoiGian::Xuat(){
    string s_hour = to_string(hour);
    string s_minute = to_string(minute);
    string s_second = to_string(second);
    if(second < 10)
        s_second = "0" + s_second;
    if(minute < 10)
        s_minute = "0" + s_minute;
    if(hour < 10)
        s_hour = "0" + s_hour;

    cout << s_hour << ":" << s_minute << ":" << s_second << endl;
}