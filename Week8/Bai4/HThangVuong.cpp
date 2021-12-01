#include "HThangVuong.h"

HinhThangVuong::HinhThangVuong(){
    dayLon = dayBe = chCao = 0;
}
HinhThangVuong::HinhThangVuong(const double& dayLon, const double& dayBe, const double& chCao){
    this->dayLon = abs(dayLon);
    this->dayBe = abs(dayBe);
    this->chCao = abs(chCao);
}
double HinhThangVuong::ChuVi(){
    double cheo = sqrt(pow((dayLon - dayBe), 2) + pow(chCao, 2));
    return cheo + dayBe + dayLon + chCao;
}
double HinhThangVuong::DienTich(){
    return (dayLon + dayBe) * chCao / 2;
}