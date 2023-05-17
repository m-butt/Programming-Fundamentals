#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
	string CRS[7] = {"CSR_01", "CSR_02", "CSR_03", "CSR_04", "CSR_05", "CSR_06", "CSR_07"};
	string Names[7];
	float hours[7];
	float Total_resolved[7];
	float pay_rate[7];
	float wages[7];
	cout << "Total problems ";
	float t;
	cin >> t;
	int const Total = t;
	for (int i = 0; i < 7; i++)
	{
		cout << CRS[i] << " Enter your name ";
		cin >> Names[i];
		cout << "Enter your working hours ";
	label2:
		cin >> hours[i];
		if (hours[i] > 8 || hours[i] < 0)
		{
			cout << "Your Value should be +ve and less then 9 ";
			cout << "Enter a new value ";
			goto label2;
		}

		cout << "Enter Number of Problems you solved ";
	label1:
		cin >> Total_resolved[i];
		if (Total_resolved[i] > Total)
		{
			cout << "Your Value should be less then total prob";
			cout << "Enter a new value";
			goto label1;
		}
		else if (Total_resolved[i] < 0)
		{
			cout << "Invalid input ";
			cout << "Enter a new +value";
			goto label1;
		}
		pay_rate[i] = 25 + 25 * (Total_resolved[i] / Total);
		wages[i] = hours[i] * pay_rate[i];
	}
	for (int i = 0; i < 7; i++)
	{
		cout << CRS[i] << setw(10) << Names[i] << setw(10) << wages[i];
		cout << endl;
	}
	int N, g;
	cout << "How many top CRS you want to see ";
	cin >> N,
		cout << "For hour Criteria press 1 For number of prob solved press 0 ";
	cin >> g;
	switch (g)
	{
	case 1:
		float b;
		string c, q;
		for (int i = 0; i < 7; i++)
		{
			for (int j = i + 1; j < 7; j++)
			{
				if (hours[i] < hours[j])
				{
					b = hours[i];
					hours[i] = hours[j];
					hours[j] = b;
					c = CRS[i];
					CRS[i] = CRS[j];
					CRS[j] = c;
					q = Names[i];
					Names[i] = Names[j];
					Names[j] = q;
				}
			}
		}
		for (int i = 0; i < N; i++)
		{

			cout << CRS[i] << setw(10) << Names[i] << setw(10) << hours[i] << endl;
		}
		break;
	case2:
		float s;
		string t, v;
		for (int i = 0; i < 7; i++)
		{
			for (int j = i + 1; j < 7; j++)
			{
				if (hours[i] < hours[j])
				{
					s = Total_resolved[i];
					Total_resolved[i] = Total_resolved[j];
					Total_resolved[j] = s;
					t = CRS[i];
					CRS[i] = CRS[j];
					CRS[j] = t;
					v = Names[i];
					Names[i] = Names[j];
					Names[j] = v;
				}
			}
		}
		for (int i = 0; i < N; i++)
		{

			cout << CRS[i] << setw(10) << Names[i] << setw(10) << Total_resolved[i] << endl;
		}
		break;
	}

	return 0;
}
