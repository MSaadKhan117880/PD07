#include<iostream>
using namespace std;

void amplify(int);

int main()
{
	int number;

	amplify(number);

	return 0;
}

void amplify(int num)
{
	cout << "Enter a number: ";
	cin >> num;
	while (num < 1)
	{
		cout << "Invalid number! Re-enter a number greater than 1: ";
		cin >> num;
	}

	for (int i = 1; i <= num; i = i + 1)
	{
		if (i % 4 == 0)
		{
			cout << i * 10 << ",";
		}
		else
		{
			cout << i << ",";
		}
	}
}