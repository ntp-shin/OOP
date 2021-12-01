#include "CongTy.h"

CongTy::CongTy(){
    ds = NULL;
}

void CongTy::Add(CongTy* child){
    ds = addTail(ds, child);
}

void CongTy::xuat(){
    return;
}

void CongTy::DanhSachNV(){
    Node * temp = ds;
    while (temp != NULL)
    {
        temp->data->xuat();
        cout << endl;
        temp = temp->next;
    }
}

void CongTy::DSXuatSac(){
    Node * temp = CongTy::xuatsac;
    while (temp != NULL)
    {
        temp->data->xuat();
        cout << endl;
        temp = temp->next;
    }
}

Node* addTail(Node* ds, CongTy* x){
    if(ds == NULL){
        return new Node {x, NULL};
    }else{
        ds->next = addTail(ds->next, x);
    }
    return ds;
}