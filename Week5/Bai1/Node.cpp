#include "Header.h"

Node* addTail(Node* lst, int x){
    if(lst == NULL){
        return new Node{x, NULL};
    }else{
        lst->next = addTail(lst->next, x);
    }
    return lst;
}

Node* addHead(Node* lst, int x){
    Node* temp = new Node{x, NULL};
    if(lst == NULL){
        return temp;
    }else{
        temp->next = lst;
    }
    return temp;
}

Node* removeHead(Node* lst){
    if(lst == NULL){
        return NULL;
    }
    else{
        Node* temp = lst->next;
        delete lst;
        return temp;
    }
}

Node* removeTail(Node* lst){
    if(lst == NULL){
        return NULL;
    }
    else if(lst->next == NULL){
        delete lst;
        return NULL;
    }
    else{
        Node* temp = lst;
        Node* cur = temp->next;
        while(cur->next != NULL){
            temp = cur;
            cur = cur->next;
        }
        delete cur;
        temp->next = NULL;
        return lst;
    }
}

void printLst(Node* lst){
    if(lst != NULL){
        cout << lst->data << " ";
        printLst(lst->next);
    }
}