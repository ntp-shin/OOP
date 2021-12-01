#include "Header.h"
#include "NGUOI.h"
#include "NV.h"

int main(){
    NV arr[3];
    cout << "Enter";
    for(int i = 0; i < 3; i++){
        arr[i].nhap();
        cout << "\n\n";
    }
    for(int i = 0; i < 3; i++){
        arr[i].in();
        cout << "\n\n";
    }
}