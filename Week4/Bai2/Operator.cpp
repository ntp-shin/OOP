#include "Bai2.h"

ThoiGian operator+(const ThoiGian& time1, const ThoiGian time2){
    int sumSecond = time1.second + time1.minute * 60 + time1.hour * 3600 +
                    time2.second + time2.minute * 60 + time2.hour * 3600;
    ThoiGian Result(sumSecond);
    return Result;
}

ThoiGian operator-(const ThoiGian& time1, const ThoiGian time2){
    int sumSecond = time1.second + time1.minute * 60 + time1.hour * 3600 -
                    time2.second - time2.minute * 60 - time2.hour * 3600;
    ThoiGian Result(sumSecond);
    return Result;
}

bool operator>=(const ThoiGian& time1, const ThoiGian& time2){
    int sum1 = time1.second + time1.minute * 60 + time1.hour * 3600;
    int sum2 = time2.second + time2.minute * 60 + time2.hour * 3600;
    if(sum1 >= sum2)
        return true;
    return false;
}

bool operator<=(const ThoiGian& time1, const ThoiGian& time2){
    int sum1 = time1.second + time1.minute * 60 + time1.hour * 3600;
    int sum2 = time2.second + time2.minute * 60 + time2.hour * 3600;
    if(sum1 <= sum2)
        return true;
    return false;
}

ostream& operator<<(ostream& out, const ThoiGian& time0){
    string s_hour = to_string(time0.hour);
    string s_minute = to_string(time0.minute);
    string s_second = to_string(time0.second);
    if(time0.second < 10)
        s_second = "0" + s_second;
    if(time0.minute < 10)
        s_minute = "0" + s_minute;
    if(time0.hour < 10)
        s_hour = "0" + s_hour;

    out << s_hour << ":" << s_minute << ":" << s_second << endl;
    return out;
}