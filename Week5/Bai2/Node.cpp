#include "Header.h"

Node* addHead(Node* lst, int c){
    if(lst == NULL)
        return new Node{c, NULL};
    return new Node{c, lst};
}
Node* addTail(Node* lst, int c){
    if(lst == NULL)
        return new Node{c, NULL};
    else
        lst->next = addTail(lst->next, c);
    return lst;
}

int getData(Node* lst){
    if(lst != NULL)
        return lst->data;
    return 0;
}

void printList(Node* lst){
    if(lst != NULL){
        cout << lst->data << " - ";
        printList(lst->next);
    }
}

string getList(Node* lst){
    string s = "";
    while (lst != NULL){
        s = to_string(lst->data) + s;
        lst = lst->next;
    }
    return s;
    
}