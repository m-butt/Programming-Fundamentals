#include <iostream>
using namespace std;
int main()
{
	int x1, x2, x3, x4, x5, x = 1, i, j, c;
	cout << "Enter 1 values ";
	cin >> x1;
	cout << "Enter 2 value ";
	cin >> x2;
	cout << "Enter 3 value ";
	cin >> x3;
	cout << "Enter 4 value ";
	cin >> x4;
	cout << "Enter 5 value ";
	cin >> x5;
	c = 0;
	i = 1;
	while (x <= 5)
	{
		j = x1;
		if (i < j)
			i = j;
		if (c == 1)
		{
			if (j < x2)
				;
			j = x2;
		}
		else if (c == 2)
		{
			if (j < x3)
				;
			j = x3;
		}
		else if (c == 3)
		{
			if (j < x4)
				;
			j = x4;
		}
		else if (c == 4)
		{
			if (j < x5)
				;
			j = x5;
		}
		c++;
		x++;
	}
	for (int p = j; p > 0; p--)
	{

		cout << p;

		{
			if (x1 >= p)
				cout << "\t*";
			else
				cout << "\t";
			if (x2 >= p)
				cout << "\t*";
			else
				cout << "\t";
			if (x3 >= p)
				cout << "\t*";
			else
				cout << "\t";
			if (x4 >= p)
				cout << "\t*";
			else
				cout << "\t";
			if (x5 >= p)
				cout << "\t*";
			else
				cout << "\t";
		}

		cout << "\n";
	}

	for (int j = 1; j <= 5; j++)
	{
		cout << "\t" << j;
	}
	cout << "\n";
	return 0;
}
