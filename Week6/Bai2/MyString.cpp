#include "Header.h"

MyString::MyString(){
    mStr = "";
}

MyString::MyString(const string str){
    mStr = str;
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
vector<string> MyString::Split(vector<char> arrChar){
    vector<string> result;
    bool Check;
    MyString temp;
    for(char cMyStr : mStr){
        Check = 1;
        for(char cArr : arrChar){
            if(cMyStr == cArr){
                Check = 0;
                break;
            }
        }
        // Check
        if(Check){
            if(cMyStr >= 'A' && cMyStr <= 'Z')
                cMyStr += 'a'- 'A';
            temp.mStr += cMyStr;
        }
        else{
            if(temp.mStr != "")
                result.push_back(temp.mStr);
            temp.mStr = "";
        }
    }
    return result;
}