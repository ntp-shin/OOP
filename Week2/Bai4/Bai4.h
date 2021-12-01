#pragma once
#include <iostream>

using namespace std;

static int stt = 0;

class ArrayInteger {
private:
	int current;
	int n;
	int* arr;
public:
	ArrayInteger();
	ArrayInteger(int n);
	ArrayInteger(int n, int a[]);
	ArrayInteger(const ArrayInteger& x);
	void display();
};
