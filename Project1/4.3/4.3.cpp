#include<iostream>
using namespace std;
int main() {
	int a[100], i, j;
	for (i = 0; i < 100; i++) {
		a[i] = 1;
	}
	for (i = 1; i < 100; i++) {
		for (j = i; j < 100; j = j + i + 1) {
			if (a[j] == 0)
				a[j] = 1;
			else a[j] = 0;
		}
	}
	for (i = 0; i < 100; i++) {
		if (a[i] == 1) {
			cout << i + 1 << endl;
		}
	}
	
	
}