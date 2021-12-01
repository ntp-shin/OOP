#include "Header.h"

Node* addHead(Node* lst, string name){
    if(lst == NULL)
        return new Node{name, 1, NULL};
    else
        return new Node{name, 1, lst};
}


Node* search(Node* lst, string name){
    Node* temp = lst;
    while(temp != NULL){
        if(temp->word == name)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

void outList(Node* lst){
    if(lst != NULL){
        cout << lst->word << " \t--> " << lst->quantity << endl;
        outList(lst->next);
    }
}