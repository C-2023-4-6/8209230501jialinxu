#include<iostream>
using namespace std;
void swap(int a,int b,int c) {
	c = a;
	a = b;
	b = c;
}
double bubble (double list[],int i) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < i-1; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j],list[j + 1]);
				changed = true;				
			}		
	} while (changed);
	
	return 0;
}
int main() {
	double list[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}
	bubble(list,10);
	for (int i = 0; i < 10; i++) {
		cout << list[i];
	}
	


}