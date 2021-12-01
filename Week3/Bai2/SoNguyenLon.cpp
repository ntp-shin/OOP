#include "Header.h"
#include <string>

SoNguyenLon::SoNguyenLon(){
    soNguyen = '0';
    //Xu li
    if(SoNguyenLon::isBigger(soNguyen, SoNguyenLon::soNguyenMax))
        SoNguyenLon::soNguyenMax = soNguyen;
}

SoNguyenLon::SoNguyenLon(int so){
    soNguyen = to_string(so);
    //Xu li
    if(SoNguyenLon::isBigger(soNguyen, SoNguyenLon::soNguyenMax))
        SoNguyenLon::soNguyenMax = soNguyen;
}

SoNguyenLon::SoNguyenLon(int so, int soLuong){
    soNguyen = "";
    for(int i = 0; i < soLuong; i++){
        soNguyen += to_string(so);
    }
    // Xu li
    if(SoNguyenLon::isBigger(soNguyen, SoNguyenLon::soNguyenMax))
        SoNguyenLon::soNguyenMax = soNguyen;
}

SoNguyenLon operator-(SoNguyenLon so1, SoNguyenLon so2){
    SoNguyenLon ketQua;
    int n1 = so1.soNguyen.size();
    int n2 = so2.soNguyen.size();
    if(n1 < n2)
        return ketQua;
    
    ketQua.soNguyen = "";
    int temp = 0;
    int muonj = 0;
    for(int i = 0; i < n1; i++){
        char c1 = so1.soNguyen[n1 - i - 1];
        char c2;
        if (n2 - i - 1 >= 0)
			c2 = so2.soNguyen[n2 - i - 1];
		else
			c2 = '0';

        temp = c1 - c2 - muonj;
        if(temp < 0){
            temp += 10;
            muonj = 1;
        }
        else
            muonj = 0;
            ketQua.soNguyen = to_string(temp) + ketQua.soNguyen;
    }
    if(muonj > 0)
        ketQua.soNguyen = "0";
    // Xu li
    ketQua.soNguyen = SoNguyenLon::deleteZero(ketQua.soNguyen);
    if(SoNguyenLon::isBigger(ketQua.soNguyen, SoNguyenLon::soNguyenMax))
        SoNguyenLon::soNguyenMax = ketQua.soNguyen;
    return ketQua;
}

SoNguyenLon operator+(SoNguyenLon so1, SoNguyenLon so2){
    string s1, s2, s_temp;
    s1 = so1.soNguyen;
    s2 = so2.soNguyen;

    if(s1.size() < s2.size()){
        s_temp = s1;
        s1 = s2;
        s2 = s_temp;
    }

    SoNguyenLon ketQua;
    ketQua.soNguyen = "";

    int n1 = s1.size();
    int n2 = s2.size();
    int temp = 0;
    int nhos = 0;
    for(int i = 0; i < n1; i++){
        char c1 = so1.soNguyen[n1 - i - 1];
        char c2;
        if (n2 - i - 1 >= 0)
			c2 = so2.soNguyen[n2 - i - 1];
		else
			c2 = '0';

        temp = c1 + c2 - '0' - '0' + nhos;
        if(temp >= 10){
            temp -= 10;
            nhos = 1;
        }
        else
            nhos = 0;
        ketQua.soNguyen = to_string(temp) + ketQua.soNguyen;
    }
    ketQua.soNguyen = to_string(nhos) +ketQua.soNguyen;
    // Xu li
    ketQua.soNguyen = SoNguyenLon::deleteZero(ketQua.soNguyen);
    if(SoNguyenLon::isBigger(ketQua.soNguyen, SoNguyenLon::soNguyenMax))
        SoNguyenLon::soNguyenMax = ketQua.soNguyen;
    return ketQua;
}

bool SoNguyenLon::isBigger(string s1, string s2) {
	if (s1.size() > s2.size())
		return true;
	else if (s1.size() < s2.size())
		return false;
	else {
		char c1, c2;
		for (int i = 0; i < s1.size(); i++) {
			c1 = s1[i];
			c2 = s2[i];
			if (c1 < c2)
				return false;
		}
	}
	return false;
}

string SoNguyenLon::deleteZero(string so) {
	int i = 0;
	string s = "";
	while (so[i] == '0')
		i++;
	for (; i < so.size(); i++)
		s += so[i];
	return s;
}

ostream& operator<<(ostream& out, const SoNguyenLon& snl){
    out << snl.soNguyen;
    return out;
}
void SoNguyenLon::display(){
    cout << soNguyen << endl;
}

