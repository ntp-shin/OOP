#include "Header.h"

int main(){
    // Read File text
        MyString ms;
        string s;
        ifstream in;
        in.open("text.txt");
            while(!in.eof()){
                getline(in, s);
                ms = ms + s;
            }
        in.close();

    // Create arr char {, . ;}
    vector<char> arrChar;
    arrChar.push_back(',');
    arrChar.push_back(' ');
    arrChar.push_back('\0');
    arrChar.push_back('.');
    arrChar.push_back(';');

    // Split
    vector<string> vMs = ms.Split(arrChar);
    cout << "size= " << vMs.size() << endl << endl;
    
    // Count how many word?
    Word text(vMs);
    text.printWord();
}
