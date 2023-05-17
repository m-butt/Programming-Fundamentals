#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int x, y, z;
	string str;
	cout << "If you want to print an Arrow Press 1: " << endl
		 << "If you want to print a cross press 2: " << endl
		 << "If you want to print a pyramid press 3" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "Enter your string not more than 3" << endl;
		cin >> str;
		cout << "THEARROW" << endl;
		cout << setw(14) << str << endl;
		cout << setw(16) << str << endl;
		cout << setw(18) << str << endl;
		cout << setw(20) << str << endl;
		cout << setw(22) << str << endl;
		cout << str << str << str << str << str << str << str << endl;
		cout << setw(22) << str << endl;
		cout << setw(20) << str << endl;
		cout << setw(18) << str << endl;
		cout << setw(16) << str << endl;
		cout << setw(14) << str << endl;
	}
	else if (x == 2)
	{
		cout << "Enter your string not more than 4" << endl;
		cin >> str;
		cout << "THE CROSS " << endl;
		cout << setw(3) << str << setw(12) << str << endl;
		cout << setw(5) << str << setw(10) << str << endl;
		cout << setw(6) << str << setw(8) << str << endl;
		cout << setw(7) << str << setw(6) << str << endl;
		cout << setw(8) << str << setw(4) << str << endl;
		cout << setw(9) << str << str << str << str << str << str << str << endl;
		cout << setw(8) << str << setw(4) << str << endl;
		cout << setw(7) << str << setw(6) << str << endl;
		cout << setw(6) << str << setw(8) << str << endl;
		cout << setw(5) << str << setw(10) << str << endl;
		cout << setw(4) << str << setw(12) << str << endl;
	}
	else if (x == 3)
	{
		cout << "Enter an Integer" << endl;
		cin >> str;
		cout << "THE PYRAMID" << endl;
		cout << str << setw(22) << str << endl;
		cout << str << ".0" << setw(19) << str << ".0" << endl;
		cout << str << ".00" << setw(17) << str << ".00" << endl;
		cout << str << ".000" << setw(15) << str << ".000" << endl;
		cout << str << ".0000" << setw(13) << str << ".0000" << endl;
		cout << str << ".00000" << setw(11) << str << ".00000" << endl;
		cout << str << ".000000" << setw(9) << str << ".000000" << endl;
		cout << str << ".0000000" << setw(7) << str << ".0000000" << endl;
		cout << str << ".00000000" << setw(5) << str << ".00000000" << endl;
		cout << str << ".000000000" << setw(3) << str << ".000000000" << endl;
		cout << str << ".0000000000" << setw(0) << str << ".0000000000" << endl;
	}
	else
		cout << "You have ENTERED an INCORRECT option" << endl;
	return 0;
}
