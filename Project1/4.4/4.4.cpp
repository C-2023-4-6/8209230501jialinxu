#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int t;
	for (int t = 0; t < size1; t++) {
		list3[t] = list1[t];
	}
			 for (int i = 0; i <  size2; i++) {
				list3[i+size1] = list2[i];
			 }

	for (t = 0; t < size1 + size2; t++) {
		cout << list3[t];
	}
}
int main(){
	int list1[40] = {};
	int list2[40] = {};
	int list3[80] = {};
	int m, n;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> list1[i];
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> list2[i];
	}
	merge(list1,n, list2,m,list3);
}