#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	int a;
	cout << "Enter Even Number: ";
	cin >> a;

	if (a % 2 != 0)
	{
		cout << "Error! Only even number\n";
	}
	else
	{
		int x, y;
		cout << "Value of x: ";
		cin >> x;
		y = pow(x, a);
		int x1 = x;

		for (int i = y; i >= 0; i--)
		{
			if (i < 10)
			{
				cout << "0" << i << " ";
			}
			else
				cout << i;

			if (i == pow(x1, a))
			{
				for (int k = 1; k <= 2 * (x - x1); k++)
				{
					cout << " ";
				}
				cout << '*';
				if (x1 != 0)
				{
					for (int j = 1; j <= (x1 * x1) + 2; j++)
					{
						cout << " ";
					}
					cout << "*";
					x1--;
				}
			}
			cout << endl;
		}
		cout << "  ";
		for (int m = 0; m <= 2 * x; m++)
		{
			if (m - x < 0)
			{
				cout << m - x;
			}
			else
				cout << " " << m - x;
		}
	}
}
