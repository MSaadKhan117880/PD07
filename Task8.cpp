#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float p1 = 0;
	float p2 = 0;
	float p3 = 0;
	int cargo;
	float ton;
	float totalTon = 0;
	float avgPrice;

	cout << "Enter number of cargo you want to transport:  ";
	cin >> cargo;
	while (cargo < 1 || cargo > 1000)
	{
		cout << "Invalid number! Re-enter: ";
		cin >> cargo;
	}

	for (int i = 1; i <= cargo; i = i + 1)
	{
		cout << "Enter weight of " << i << " cargo ( in tons ): ";
		cin >> ton;
		while (ton < 1 || ton > 1000)
		{
			cout << "Invalid number! Re-enter: ";
			cin >> ton;
		}

		if (ton <= 3)
		{
			p1 = p1 + ton;
		}
		else if (ton <= 11)
		{
			p2 = p2 + ton;
		}
		else if (ton > 11)
		{
			p3 = p3 + ton;
		}
		totalTon = totalTon + ton;
		cout << totalTon << endl;
	}
	avgPrice = ((p1 * 200.00) + (p2 * 175.00) + (p3 * 120.00)) / totalTon;;

	p1 = (p1 / totalTon) * 100.0;
	p2 = (p2 / totalTon) * 100.0;
	p3 = (p3 / totalTon) * 100.0;


	cout << "Percentage of cargo on minibus = " << fixed << setprecision(2) << p1 << "%" << endl;
	cout << "Percentage of cargo on truck = " << fixed << setprecision(2) << p2 << "%" << endl;
	cout << "Percentage of cargo on train = " << fixed << setprecision(2) << p3 << "%" << endl;
	cout << "Average price per ton of carried cargo: " << fixed << setprecision(2) << avgPrice << "$" << endl;

	return 0;
}