#include<iostream>
using namespace std;
int f(int i)
{
	return (i + 1) * 2;
}
int main()
{
	int sum = 0;
	int i = 1;
	int n = 9;
	while (n--&&n>=0)
	{
		sum = f(i);
		i = sum;
	}
	cout << "����" << sum << "������" << endl;
	
	return 0;
}