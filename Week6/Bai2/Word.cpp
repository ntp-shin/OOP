#include "Header.h"

Word::Word(){
    howmany = 0;
    List = NULL;
}

Word::Word(vector<string> arrWord){
    List = NULL;
    howmany = 0;
    Node* Find;
    for(string word : arrWord){
        Find = search(List, word);
        if(Find == NULL){
            List = addHead(List, word);
            howmany++;
        }else{
            Find->quantity++;
        }
    }
}

void Word::printWord(){
    cout << "How many word? --> " << howmany << endl;
    outList(List);
}