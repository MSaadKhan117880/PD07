#include<iostream>
using namespace std;

int main()
{
	int period;
	int patients;
	int doctors = 7;
	int treatedPatients = 0;
	int untreatedPatients = 0;

	cout << "Enter the period of treatments: ";
	cin >> period;
	while (period < 1 || period > 1000)
	{
		cout << "Invalid Input! Re-enter the period of treatments: ";
		cin >> period;
	}

	for (int i = 1; i <= period; i = i + 1)
	{
		cout << "Enter number of patients for " << i << " days(s): ";
		cin >> patients;
		while (patients < 0 || patients > 10000)
		{
			cout << "Invalid no. of Patients! Re-enter: ";
			cin >> patients;
		}

		if (i % 3 == 0)
		{
			doctors = doctors + 1;
		}
		
		if (patients <= doctors)
		{
			treatedPatients = treatedPatients + patients;
		}
		else if (patients > doctors)
		{
			treatedPatients = treatedPatients + doctors;
			untreatedPatients = untreatedPatients + (patients - doctors);
		}
	}

	cout << "Treated Patients = " << treatedPatients << endl;
	cout << "Untreated Patients = " << untreatedPatients << endl;

	return 0;
}