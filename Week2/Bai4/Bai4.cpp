#include "Bai4.h"

int main() {
	ArrayInteger a(3);
	a.display();
	
	int arr[10];
	for (int i = 0; i < 8; i++) {
		arr[i] = i * i;
	}
	
	ArrayInteger b(8, arr);
	b.display();

	ArrayInteger c(b);
	c.display();

	ArrayInteger d;
	d.display();
	return 0;
}