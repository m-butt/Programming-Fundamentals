#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "Enter an Alphabet " << endl;
	cin >> a;
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		switch (a)
		{

		case 'A':
			cout << a << " is a vowel" << endl;
			break;
		case 'E':
			cout << a << " is a vowel" << endl;
			break;
		case 'I':
			cout << a << " is a vowel" << endl;
			break;
		case 'O':
			cout << a << " is a vowel" << endl;
			break;
		case 'U':
			cout << a << " is a vowel" << endl;
			break;

		case 'a':
			cout << a << " is a vowel" << endl;
			break;
		case 'e':
			cout << a << " is a vowel" << endl;
			break;
		case 'i':
			cout << a << " is a vowel" << endl;
			break;
		case 'o':
			cout << a << " is a vowel" << endl;
			break;
		case 'u':
			cout << a << " is a vowel" << endl;
			break;
		default:
			cout << a << " Not a vowel" << endl;
			break;
		}
	}
	else
		cout << "Incorrect INPUT" << endl;
	return 0;
}
