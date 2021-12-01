#include "Header.h"

SoNguyenLon operator+(const SoNguyenLon& so1, const SoNguyenLon& so2){
    Node* tSo1 = so1.lst;
    Node* tSo2 = so2.lst;
    SoNguyenLon result;
    delete result.lst;
    result.lst = NULL;
    int r = 0, sum;
    while(tSo1 != NULL || tSo2 != NULL){
        sum = getData(tSo1) + getData(tSo2) + r;
        if(sum > 9){
            r = sum / 10;
            sum = sum % 10;
        }else{
            r = 0;
        }
        result.lst = addTail(result.lst, sum);
        
        if(tSo1 != NULL)    tSo1 = tSo1->next;
        if(tSo2 != NULL)    tSo2 = tSo2->next; 
    }
    return result;
}

SoNguyenLon operator-(const SoNguyenLon& so1, const SoNguyenLon& so2){
    Node* tSo1 = so1.lst;
    Node* tSo2 = so2.lst;
    SoNguyenLon result;
    delete result.lst;
    result.lst = NULL;
    int r = 0, sum;
    while(tSo1 != NULL || tSo2 != NULL){
        sum = getData(tSo1) - getData(tSo2) - r;
        if(sum < 0){
            r = 1;
            sum = sum + 10;
        }else{
            r = 0;
        }
        result.lst = addTail(result.lst, sum);
        
        if(tSo1 != NULL)    tSo1 = tSo1->next;
        if(tSo2 != NULL)    tSo2 = tSo2->next; 
    }
    return result;
}

SoNguyenLon operator*(const SoNguyenLon& so1, const SoNguyenLon& so2){
    Node* tSo1 = so1.lst;   Node* tSo2 = so2.lst;
    SoNguyenLon result;
    int numZero = 0;
    while(tSo2 != NULL){
        SoNguyenLon temp;
        for(int i = 0; i < tSo2->data; i++){
            temp = temp + so1;
        }
        for(int i = 0; i < numZero; i++){
            temp.lst = addHead(temp.lst, 0);
        }
        numZero++;
        result = result + temp;
        tSo2 = tSo2->next;
    }
    return result;
}

ostream& operator<<(ostream& out, SoNguyenLon snl){
    string s = getList(snl.lst);
    out << s;
    return out;
}