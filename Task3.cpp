#include<iostream>
using namespace std;

int main()
{
	int rows;

	cout << "Enter desired no. of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows / 2; i = i + 1)
	{
		for (int spaces = rows/2-1; spaces >= i; spaces = spaces - 1)
		{
			cout << " ";
		}
		for (int stars = 1; stars <= i; stars = stars + 1)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i <= rows / 2; i = i + 1)
	{
		for (int spaces = 1; spaces <= i-1; spaces = spaces + 1)
		{
			cout << " ";
		}
		for (int stars = (rows / 2); stars >= i; stars = stars - 1)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}