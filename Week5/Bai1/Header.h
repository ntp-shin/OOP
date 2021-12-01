#pragma once
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* addTail(Node* lst, int x);
Node* addHead(Node* lst, int x);
Node* removeHead(Node* lst);
Node* removeTail(Node* lst);
void printLst(Node* lst);


class LinkedList{
private:
    Node *pHead, *pTail;
    int curN;
public:
    LinkedList(void);
    // ~LinkedList(void);
    static Node* CreateNode(const int& n);
    Node* AddHead(const int& n);
    Node* AddTail(const int& n);
    Node* RemoveHead();
    Node* RemoveTail();
    friend ostream& operator<<(ostream& os, const LinkedList& ll);
    int& operator[](const int& i);
};