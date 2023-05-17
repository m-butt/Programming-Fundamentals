#include <iostream>
using namespace std;

int main()
{

	char a, b[10] = {};
	bool x = true;
	bool decimalpt = false;

	cout << "i for integer, f for float, d for double: ";
	cin >> a;
	cout << "Number: ";
	cin.ignore();
	cin.getline(b, 10);

	if (a == 'i')
	{
		for (int i = 0; b[i] != '\0'; i++)
		{
			if (b[i] > 57 || b[i] < 46)
			{
				x = false;
				break;
			}
			if (b[i] == 45 && i == 0)
				x = true;
		}
	}
	else if (a == 'f')
	{
		for (int i = 0; b[i] != '\0'; i++)
		{
			if ((!(b[i + 1] == '\0' && b[i] == 'f') && b[i] > 57) || (b[i] != 46 && b[i] < 48) || (b[i + 1] == '\0' && b[i] != 'f'))
				x = false;
			if (b[i] == 45 && i == 0)
				x = true;
			if (b[i] == 46 && decimalpt)
				x = false;
			if (b[i] == 46 && !decimalpt)
				decimalpt = true;
		}
	}
	else if (a == 'd')
	{
		for (int i = 0; b[i] != '\0'; i++)
		{
			if (b[i] > 57 || (b[i] != 46 && b[i] < 48))
				x = false;
			if (b[i] == 45 && i == 0)
				x = true;
			if (b[i] == 46 && decimalpt)
				x = false;
			if (b[i] == 46 && !decimalpt)
				decimalpt = true;
		}
	}
	if (x == false)
	{
		cout << "Invalid!\n";
	}
	else
		cout << "Valid!";
}
