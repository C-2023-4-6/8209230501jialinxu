#include<iostream>
using namespace std;
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	int con = 0;
	for (int i = 0; i < 10; i++) {
		con = 0;
		for (int j = i - 1; j >= 0; j--) {
			if (a[i] == a[j]) {
				con = 1;
				break;
			}
		}
		if (!con)
			cout << a[i];
	}
}