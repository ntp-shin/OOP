#include "Header.h"

LinkedList::LinkedList(void){
    pHead = pTail = NULL;
    curN = 0;
}

Node* LinkedList::CreateNode(const int& n){
    return new Node{n, NULL};
}
Node* LinkedList::AddHead(const int& n){
    curN++;
    pHead = addHead(pHead, n);
    Node* cur = pHead;
    while(cur->next != NULL)
        cur = cur->next;
    pTail = cur;
    return pHead;
}

Node* LinkedList::AddTail(const int& n){
    curN++;
    pHead = addTail(pHead, n);
    Node* cur = pHead;
    while(cur->next != NULL)
        cur = cur->next;
    pTail = cur;
    return pHead;
}

Node* LinkedList::RemoveHead(){
    curN--;
    pHead = removeHead(pHead);
    Node* cur = pHead;
    while(cur->next != NULL)
        cur = cur->next;
    pTail = cur;
    return pHead;
}

Node* LinkedList::RemoveTail(){
    curN--;
    pHead = removeTail(pHead);
    Node* cur = pHead;
    while(cur->next != NULL)
        cur = cur->next;
    pTail = cur;
    return pHead;
}

ostream& operator<<(ostream& os, const LinkedList& ll){
    Node* cur = ll.pHead;
    while(cur != NULL){
        os << cur->data << " ";
        cur = cur->next;
    }
    os << endl;
    return os;
}

int& LinkedList::operator[](const int& i){
    if (i <= 0) {
        return pHead->data;
    }
    else if (i >= curN)
        return pTail->data;
        
    Node* temp = pHead->next;
    for (int j = 1; j < i; j++){
        temp = temp->next;
    }
    return temp->data;
}