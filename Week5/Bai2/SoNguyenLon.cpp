#include "Header.h"

SoNguyenLon::SoNguyenLon(){
    lst = new Node{0, NULL};
}

SoNguyenLon::SoNguyenLon(const long long& number){
    lst = NULL;
    int r, tempNumber = number;
    while(tempNumber > 0){
        r = tempNumber % 10;
        lst = addTail(lst, r);
        tempNumber /= 10;
    }
}

SoNguyenLon::SoNguyenLon(const int& num1, const int& num2){
    lst = NULL;
    for(int i = 0; i < num2; i++)
        lst = addTail(lst, num1);
}

SoNguyenLon::SoNguyenLon(const SoNguyenLon& Copy){
    Node* temp = Copy.lst;
    lst = NULL;
    while(temp != NULL){
        lst = addTail(lst, temp->data);
        temp = temp->next;
    }   
}

SoNguyenLon::~SoNguyenLon(){

}