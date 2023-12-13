#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	for (int a = 2; a <= num / 2; a++)
	{
		if (num % a == 0)
		{
			return false;
		}
	}
	return true;
}
void printPrimeNumber(int num)
{
	const int NUMBER_OF_PRIMES = 200;
	const int LINE = 10;
	int i = 0;
	int number = 2;
	while (i < num)
	{
		if (is_prime(number))
		{
			i++;
			if (i % LINE == 0)
			{
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}
}

int main()
{
	cout << "前200个素数是";
	printPrimeNumber(200);
	return 0;
}
