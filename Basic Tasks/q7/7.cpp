#include <iostream>
using namespace std;
int main()
{
	char opp;
	cout << "Welcome to Online Food Shop\n\nMENU\n\nPress(1) to order Burger\nPress(2) to order Pizza\nPress(3) to order Sandwich\n";
	cin >> opp;
	switch (opp)
	{
	case '1':
		char b;
		cout << "Press(a) to buy Crispy Chicken Burger of Rs.500\nPress(b) to buy Beef Burger of Rs.600\nPress(c) to buy Fish Burger of Rs.800\n";
		cin >> b;
		switch (b)
		{
		case 'a':
			int x;
			int y;
			cout << "Enter the quantity" << endl;
			cin >> x;
			y = x * 500;
			cout << "Total cost = Rs." << y << endl;
			break;
		case 'b':
			int x1;
			int y1;
			cout << "Enter the quantity" << endl;
			cin >> x1;
			y1 = x1 * 600;
			cout << "Total cost = Rs." << y1 << endl;
			break;
		case 'c':
			int x2;
			int y2;
			cout << "Enter the quantity" << endl;
			cin >> x2;
			y2 = x2 * 800;
			cout << "Total cost = Rs." << y2 << endl;
			break;
		default:
			cout << "Invalid Input" << endl;
			break;
		}
		break;
	case '2':
		char piz;
		cout << "Press(a) to buy Chicken Tikka Pizza" << endl
			 << "press(b) to buy Chicken Fajita Pizza" << endl
			 << "Press(c) to buy Four Seasons Pizza" << endl;
		cin >> piz;
		switch (piz)
		{
		case 'a':
			char size;
			cout << "Press(a) to buy small sized pizza of Rs.550" << endl
				 << "Press(b) to buy medium sized pizza of Rs.700" << endl
				 << "Press(c) to buy large sized pizza of Rs.1999" << endl;
			cin >> size;
			switch (size)
			{
			case 'a':
				int x3;
				int y3;
				cout << "Enter the quantity" << endl;
				cin >> x3;
				y3 = x3 * 550;
				cout << "Total cost = Rs." << y3 << endl;
				break;
			case 'b':
				int x4;
				int y4;
				cout << "Enter the quantity" << endl;
				cin >> x4;
				y4 = x4 * 700;
				cout << "Total cost = Rs." << y4 << endl;
				break;
			case 'c':
				int x5;
				int y5;
				cout << "Enter the quantity" << endl;
				cin >> x5;
				y5 = x5 * 1999;
				cout << "Total cost = Rs." << y5 << endl;
				break;
			default:
				cout << "Invalid Input" << endl;
				break;
			}
			break;
		case 'b':
			char size2;
			cout << "Press(a) to buy small sized pizza of Rs.500" << endl
				 << "Press(b) to buy medium sized pizza of Rs.750" << endl
				 << "Press(c) to buy large sized pizza of Rs.1000" << endl;
			cin >> size2;
			switch (size2)
			{
			case 'a':
				int x6;
				int y6;
				cout << "Enter the quantity" << endl;
				cin >> x6;
				y6 = x6 * 500;
				cout << "Total cost = Rs." << y6 << endl;
				break;
			case 'b':
				int x7;
				int y7;
				cout << "Enter the quantity" << endl;
				cin >> x7;
				y7 = x7 * 750;
				cout << "Total cost = Rs." << y7 << endl;
				break;
			case 'c':
				int x8;
				int y8;
				cout << "Enter the quantity" << endl;
				cin >> x8;
				y8 = x8 * 1000;
				cout << "Total cost = Rs." << y8 << endl;
				break;
			default:
				cout << "ERROR : Invalid Input" << endl;
				break;
			}
			break;
		case '3':
			char size3;
			cout << "Press(a) to buy small sized pizza of Rs.540" << endl
				 << "Press(b) to buy medium sized pizza of Rs.780" << endl
				 << "Press(c) to buy large sized pizza of Rs.1000" << endl;
			cin >> size;
			switch (size3)
			{
			case 'a':
				int x9;
				int y9;
				cout << "Enter the quantity" << endl;
				cin >> x9;
				y9 = x9 * 540;
				cout << "Total cost = Rs." << y9 << endl;
				break;
			case 'b':
				int x0;
				int y0;
				cout << "Enter the quantity" << endl;
				cin >> x0;
				y0 = x0 * 780;
				cout << "Total cost = Rs." << y0 << endl;
				break;
			case 'c':
				int x11;
				int y11;
				cout << "Enter the quantity" << endl;
				cin >> x11;
				y11 = x11 * 1000;
				cout << "Total cost = Rs." << y11 << endl;
				break;
			default:
				cout << "Invalid Input" << endl;
				break;
			}
		default:
			cout << "Invalid Input" << endl;
			break;
		}
		break;
	case '3':
		char sand;
		cout << "Press(a) to buy Club Sandwich of Rs.100" << endl
			 << "Press(b) to buy Chicken Sandwich of Rs.200" << endl
			 << "Press(c) to buy Vegetable Sandwich of Rs.300" << endl;
		cin >> sand;
		switch (sand)
		{
		case 'a':
			int x22;
			int y22;
			cout << "Enter the quantity" << endl;
			cin >> x22;
			y22 = x22 * 100;
			cout << "Total cost = Rs." << y22 << endl;
			break;
		case 'b':
			int x33;
			int y33;
			cout << "Enter the quantity" << endl;
			cin >> x33;
			y33 = x33 * 200;
			cout << "Total cost = Rs." << y33 << endl;
			break;
		case 'c':
			int x44;
			int y44;
			cout << "Enter the quantity" << endl;
			cin >> x44;
			y44 = x44 * 300;
			cout << "Total charges = Rs." << y44 << endl;
			break;
		default:
			cout << "Invalid Input" << endl;
			break;
		}
		break;
	default:
		cout << "Invalid Input" << endl;
		break;
	}

	return 0;
}
