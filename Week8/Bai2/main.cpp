#include "header.h"
#include "imaginary1.h"
#include "imaginary2.h"
int main(){
    Imaginary1 num1, num2;
    num1.nhap();
    num1.xuat();
    num2.nhap();
    num2.xuat();

    cout << "\n------------\n";

    Imaginary2 na, nb;
    cout << "Nhap a: ";
    cin >> na;
    cout << "Nhap b: ";
    cin >> nb;
    
    cout << "So a: " << na << endl; 
    cout << "So b: " << nb << endl;

    cout << "\n------------\n";

    cout << "a + b = " << na + nb << endl;
    cout << "a - b = " << na - nb << endl;
    cout << "a * b = " << na * nb << endl;
    cout << "a / b = " << na / nb << endl;
    return 0;
}