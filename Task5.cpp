#include<iostream>
using namespace std;

int main()
{
	int rows;
	int dots = 0;

	cout << "Enter desired no. of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i = i + 1)
	{
		dots = dots + i;
	}
	cout << "Dots = " << dots << endl;

	return 0;
}