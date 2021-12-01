#pragma once
#include <iostream>
#include <vector>

using namespace std;

class MyString{
private:
    string mStr;
public:
    MyString();
    MyString(const char* ms);

    MyString operator=(const string ss);
    friend MyString operator+(const MyString& s1, const MyString& s2);
    friend ostream& operator<<(ostream& out, const MyString& ms);

    vector<MyString> Split(vector<char> arrChar, bool check);
};

