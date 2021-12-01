#include <iostream>
#include <string>

using namespace std;

class ThoiGian{
private:
    int second;
    int minute;
    int hour;
public:
    ThoiGian(){
        second = minute = hour = 0;
    }
    ThoiGian(int number){
        hour = number / 3600;
        number = number % 3600;
        minute = number / 60;
        second = number % 60;
    }
    ThoiGian(int minute, int second){
        this->second = second;
        this->hour = minute / 60;
        this->minute = minute % 60;
    }
    ThoiGian(int hour, int minute, int second){
        // Second
        if(second >= 60){
            minute = minute + second / 60;
            second = second % 60;
        }
        else if(second < 0)
            second = 0;

        // Minute
        if(minute >= 60){
            hour = hour + minute / 60;
            minute = minute % 60;
        }
        else if(minute < 0)
            minute = 0;

        // Gan
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void Xuat(){
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
};