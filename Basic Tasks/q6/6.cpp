#include <iostream>
#include <string>
using namespace std;
int main()
{
	double gb, gb1, gb2, gb3, mb1, mb2, am1, am2, am3, mb;
	char pac;
	cout << "Enter GBs you have consumed" << endl;
	cin >> gb;
	cout << "Enter your subsciibed package A , B , C " << endl;
	cin >> pac;
	if (gb > 1)
	{
		gb1 = gb;
		gb1 = gb1 - 1;
		mb1 = gb1 * 1000;
		am1 = 100 + ((mb1 / 100) * 20);
	}
	else
	{
		am1 = 100;
	}
	if (gb > 2.5)
	{
		gb2 = gb;
		gb2 = gb2 - 2.5;
		mb2 = gb2 * 1000;
		am2 = 200 + ((mb2 / 100) * 10);
	}
	else
	{
		am2 = 200;
	}
	am3 = 1000;
	if (pac == 'A')
	{

		cout << "Your amount due is RS. " << am1 << endl;
		if (am1 > am2)
		{
			cout << "You would have saved RS. " << am1 - am2 << ", if you had taken Package B" << endl;
		}
		else
			cout << "Package A is more economical than package " << endl;
		if (am1 > am3)
		{
			cout << "You would have saved RS. " << am1 - am2 << ", if you had taken Package C" << endl;
		}
		else
			cout << "Package A is more economical than package C " << endl;
	}

	if (pac == 'B')
	{
		cout << "Your amount due is RS. " << am2 << endl;
		if (am2 > am1)
		{
			cout << "You would have saved RS. " << am2 - am1 << ", if you had taken Package A" << endl;
		}
		else
			cout << "Package B is more economical than package A " << endl;
		if (am2 > am3)
		{
			cout << "You would have saved RS. " << am2 - am3 << ", if you had taken Package C" << endl;
		}
		else
			cout << "Package B is more economical than package C " << endl;
	}

	if (pac == 'C')
	{
		cout << "Your amount due is RS. " << am3 << endl;
		if (am3 > am1)
		{
			cout << "You would have saved RS. " << am3 - am1 << ", if you had taken Package A" << endl;
		}
		else
			cout << "Package C is more economical than package A " << endl;
		if (am3 > am2)
		{
			cout << "You would have saved RS. " << am3 - am2 << ", if you had taken Package B" << endl;
		}
		else
			cout << "Package C is more economical than package B " << endl;
	}

	return 0;
}
