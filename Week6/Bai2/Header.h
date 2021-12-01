#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Node - Word
struct Node{
    string word;
    int quantity;
    Node* next;
};
Node* addHead(Node* lst, string name);
Node* search(Node* lst, string name);
void outList(Node* lst);

// Class - My String
class MyString{
private:
    string mStr;
public:
    MyString();
    MyString(const string str);
    MyString(const char* ms);

    MyString operator=(const string ss);
    friend MyString operator+(const MyString& s1, const MyString& s2);
    friend ostream& operator<<(ostream& out, const MyString& ms);
    vector<string> Split(vector<char> arrChar);
};

// Class List - Word
class Word{
private:
    int howmany;
    Node* List;
public:
    Word();
    Word(vector<string> arrWord);
    void printWord();
};