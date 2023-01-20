#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float p1 = 0;
	float p2 = 0;
	float p3 = 0;
	int n;
	int num;

	cout << "Enter number of numbers you want to enter:  ";
	cin >> n;
	while (n < 1 || n > 1000)
	{
		cout << "Invalid number! Re-enter: ";
		cin >> n;
	}

	for (int i = 1; i <= n; i = i + 1)
	{
		cout << "Enter a number for " << i << " entry: ";
		cin >> num;
		while (num < 1 || num > 1000)
		{
			cout << "Invalid number! Re-enter: ";
			cin >> num;
		}

		if (num % 2 == 0)
		{
			p1 = p1 + 1;
		}
		if (num % 3 == 0)
		{
			p2 = p2 + 1;
		}
		if (num % 4 == 0)
		{
			p3 = p3 + 1;
		}
	}

	p1 = (p1 / n) * 100.0;
	p2 = (p2 / n) * 100.0;
	p3 = (p3 / n) * 100.0;

	cout << "Percentage 1 = " << fixed << setprecision(2) << p1 << "%" << endl;
	cout << "Percentage 2 = " << fixed << setprecision(2) << p2 << "%" << endl;
	cout << "Percentage 3 = " << fixed << setprecision(2) << p3 << "%" << endl;

	return 0;
}