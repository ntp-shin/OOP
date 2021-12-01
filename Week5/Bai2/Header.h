#include <iostream>
#include <string>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* addTail(Node* lst, int c);
Node* addHead(Node* lst, int c);
int getData(Node* lst);
void printList(Node* lst);
string getList(Node* lst);

class SoNguyenLon{
private:
    Node* lst;
public:
    SoNguyenLon();
    SoNguyenLon(const long long& number);
    SoNguyenLon(const int& num1, const int& num2);
    SoNguyenLon(const SoNguyenLon& Copy);
    ~SoNguyenLon();
    void printSNL(){
        cout << getList(lst) << endl;
        // printList(lst);
    }

    friend SoNguyenLon operator+(const SoNguyenLon& so1, const SoNguyenLon& so2);
    friend SoNguyenLon operator-(const SoNguyenLon& so1, const SoNguyenLon& so2);
    friend SoNguyenLon operator*(const SoNguyenLon& so1, const SoNguyenLon& so2);
    friend ostream& operator<<(ostream& out, SoNguyenLon snl);

};