#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	int a;
	cout << "Enter Odd Number: ";
	cin >> a;

	if (a % 2 == 0)
	{
		cout << "Error! Only Odd number\n";
	}
	else
	{
		int x, y;
		cout << "Value of x: ";
		cin >> x;
		y = pow(x, a);
		int x1 = x, x2 = x;

		for (int i = y + 1; i >= -y - 1; i--)
		{
			if (i < 10 && i >= 0)
			{
				cout << " " << i;
			}
			else
				cout << i;
			if (i >= -y)
			{
				if (i == pow(x1, a))
				{
					if (i > 0)
					{
						for (int k = 4 * (x1 + x); k > 0; k -= 2)
						{
							cout << " ";
						}
					}
					else
					{
						for (int k = 2 * x2; k > 0; k--)
						{
							cout << " ";
						}
						x2--;
					}
					cout << "*";
					x1--;
				}
				cout << endl;
			}
		}
		cout << "\n  ";
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
