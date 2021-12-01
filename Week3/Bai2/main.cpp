#include "Header.h"

string SoNguyenLon::soNguyenMax = "0";

int main(){
    SoNguyenLon snl1;
    SoNguyenLon snl2(1234567);
    SoNguyenLon snl3(3, 14);
    SoNguyenLon snl4(9, 20);
    SoNguyenLon snl5 = snl3 - snl2;
    SoNguyenLon snl6 = 45678910 - snl2;
    SoNguyenLon snl7 = snl4 - snl3 + 123456789;

    cout << snl1 << endl;
    cout << snl2 << endl;
    cout << snl3 << endl;
    cout << snl4 << endl;
    cout << snl5 << endl;
    cout << snl6 << endl;
    cout << snl7 << endl << endl;
    cout << "SoNguyenLon Max:" << endl;
    cout << SoNguyenLon::soNguyenMax;
    return 0;
}