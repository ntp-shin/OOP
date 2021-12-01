#include "Bai2.h"

int SoNguyen::min = 999999;
int main(){
    cout << "Nhap vao mang: " << endl;
    vector<SoNguyen> arr{7};
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 7; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << SoNguyen::min;
}