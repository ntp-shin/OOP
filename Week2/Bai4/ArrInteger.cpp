#include "Bai4.h"

ArrayInteger::ArrayInteger() {
	current = ++stt;
	cout << "n = ";
	int x;
	cin >> x;
	n = x;
	arr = new int[x];
	for (int i = 0; i < x; i++) {
		cout << "so thu " << i + 1 << ": ";
		cin >> arr[i];
	}
}

ArrayInteger::ArrayInteger(int n) {
	current = ++stt;
	this->n = n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "so thu " << i + 1 << ": ";
		cin >> arr[i];
	}
}

ArrayInteger::ArrayInteger(int n, int a[]) {
	current = ++stt;
	this->n = n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = a[i];
	}
}

ArrayInteger::ArrayInteger(const ArrayInteger& x) {
	current = ++stt;
	this->n = x.n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = x.arr[i];
	}
}

void ArrayInteger::display() {
	cout << "\n Mang " << current << endl;
	for (int i = 0; i < n; i++) {
		cout << "so thu " << i + 1 << " la: " << arr[i] << endl;
	}

}