#pragma once
#include "Header.h"

class CongTy;

struct Node{
    CongTy* data;
    Node* next;
};

Node* addTail(Node* ds, CongTy* x);

class CongTy{
private:
    Node* ds;
protected:
    static Node* xuatsac;
    virtual void xuat();
public:
    CongTy();
    
    void DSXuatSac();
    void DanhSachNV();

    void Add(CongTy* child);

};
