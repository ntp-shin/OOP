#include "Header.h"

MyString::MyString(){
    mStr = "";
}

MyString::MyString(const char* ms){
    int i = 0;
    while(ms[i]){
        mStr += ms[i];
        i++;
    }
}

//--------------------------------------------------
MyString MyString::operator=(const string ss){
    MyString result;
    result.mStr = ss;
    return result;
}

MyString operator+(const MyString& s1, const MyString& s2){
    MyString result;
    result.mStr = s1.mStr + s2.mStr;
    return result;
}

ostream& operator<<(ostream& out, const MyString& ms){
    out << ms.mStr;
    return out;
}

//-----

vector<MyString> MyString::Split(vector<char> arrChar, bool Chk){
    vector<MyString> result;
    bool check;
    MyString temp;
    for (char item : mStr){
        check = 1;
        for (char c_check : arrChar)
            if (item == c_check){
                check = 0;
                break;
            }
        if (check)
            temp.mStr += item;
        else{
            if (!(Chk && temp.mStr == ""))
                result.push_back(temp);
            temp.mStr = "";
        }
    }
    if (!(Chk && temp.mStr == ""))
        result.push_back(temp);
    return result;
}