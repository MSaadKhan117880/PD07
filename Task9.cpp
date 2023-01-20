#include<iostream>
using namespace std;

int main()
{
	int rows;
	cout << "Enter no. of rows: ";
	cin >> rows;

	int i, j, k;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		for (k = rows; k >= i; k--)
		{
			cout << " ";
		}
		for (k = rows; k > i; k--)
		{
			cout << " ";
		}
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i <= (rows * 2) + 1; i = i + 1)
	{
		cout << "*";
	}
	cout << endl;
	
}