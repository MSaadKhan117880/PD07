#include<iostream>
using namespace std;

int main()
{
	int rows;

	cout << "Enter desired no. of rows: ";
	cin >> rows;

	for (int i = rows; i >= 1; i = i - 1)
	{
		for (int j = 1; j <= i; j = j + 1)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}