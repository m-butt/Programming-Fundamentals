#include <iostream>

using namespace std;

int main()
{
	int x, c;
	cout << "Enter your first value  ";
	cin >> x;
	c = 0;
	if (x <= 100)
	{

		while (x / 10 < 1)
		{
			if (c <= 9)
			{

				cout << x << ",";
				int i = x % 10;
				x = x + i;
				c++;
			}
			else
				return 0;
		}
		while (x / 10 < 10)
		{
			if (c <= 9)
			{
				cout << x << ",";
				int i = x % 10;
				int y = x / 10;
				int z = i * y;
				x = x + z;
				c++;
			}
			else
				return 0;
		}

		while (x / 10 < 100)
		{
			if (c <= 10)
			{
				cout << x << ",";
				int i = x % 10;
				int y = x / 10;
				y = y % 10;
				if (y > 0)
				{
					int z = i * y;
					x = x + z;
				}
				else
				{
					int z = i + y;
					x = x + z;
				}
				c++;
			}
			else
				return 0;
		}

		while (x / 10 < 1000)
		{
			if (c <= 10)
			{
				cout << x << ",";
				int i = x % 10;
				int y = x / 100;
				y = y % 10;
				if (y > 0)
				{
					int z = i * y;
					x = x + z;
				}
				else
				{
					int z = i + y;
					x = x + z;
				}
				c++;
			}
			else
				return 0;
		}
	}
	else
	{
		cout << "Out of range";
		return 0;
	}
	return 0;
}
