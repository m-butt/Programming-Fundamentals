#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int x;
	int p1c_, p2c_, p11c_, p22c_, r1, r2;
	char p1c, p2c;
	cout << "How many cards each players should have ";
	cin >> x;
	if (x == 2 || x == 3 || x == 4 || x == 5)
	{
		cout << "P1 choose a card (other then ACE): ";
		cin >> p1c;
		if (p1c == '2' || p1c == '3' || p1c == '4' || p1c == '5' || p1c == '6' || p1c == '7' || p1c == '8' || p1c == '9' || p1c == 'T' || p1c == 't' || p1c == 'j' || p1c == 'J' || p1c == 'q' || p1c == 'Q' || p1c == 'K' || p1c == 'k')
		{
			if (p1c == '2')
				p1c_ = 2;
			if (p1c == '3')
				p1c_ = 3;
			if (p1c == '4')
				p1c_ = 4;
			if (p1c == '5')
				p1c_ = 5;
			if (p1c == '6')
				p1c_ = 6;
			if (p1c == '7')
				p1c_ = 7;
			if (p1c == '8')
				p1c_ = 8;
			if (p1c == '9')
				p1c_ = 9;
			if (p1c == 'T')
				p1c_ = 10;
			if (p1c == 't')
				p1c_ = 10;
			if (p1c == 'j')
				p1c_ = 10;
			if (p1c == 'J')
				p1c_ = 10;
			if (p1c == 'q')
				p1c_ = 10;
			if (p1c == 'Q')
				p1c_ = 10;
			if (p1c == 'K')
				p1c_ = 10;
			if (p1c == 'k')
				p1c_ = 10;
		}
		else
		{
			cout << "Invalid input\n";
			return 0;
		}
		cout << "P2 choose a card: ";
		cin >> p2c;
		if (p2c == '2' || p2c == '3' || p2c == '4' || p2c == '5' || p2c == '6' || p2c == '7' || p2c == '8' || p2c == '9' || p2c == 'T' || p2c == 't' || p2c == 'j' || p2c == 'J' || p2c == 'q' || p2c == 'Q' || p2c == 'K' || p2c == 'k')
		{
			if (p1c == '2')
				p2c_ = 2;
			if (p1c == '3')
				p2c_ = 3;
			if (p1c == '4')
				p2c_ = 4;
			if (p1c == '5')
				p2c_ = 5;
			if (p1c == '6')
				p2c_ = 6;
			if (p1c == '7')
				p2c_ = 7;
			if (p1c == '8')
				p2c_ = 8;
			if (p1c == '9')
				p2c_ = 9;
			if (p1c == 'T')
				p2c_ = 10;
			if (p1c == 't')
				p2c_ = 10;
			if (p1c == 'j')
				p2c_ = 10;
			if (p1c == 'J')
				p2c_ = 10;
			if (p1c == 'q')
				p2c_ = 10;
			if (p1c == 'Q')
				p2c_ = 10;
			if (p1c == 'K')
				p2c_ = 10;
			if (p1c == 'k')
				p2c_ = 10;
		}
		else
		{
			cout << "Invalid input\n";
			return 0;
		}
		// p1 random number
		if (x >= 2)
		{
			srand(time(0));
			r1 = (rand() % 13) + 1;

			if (r1 != 1)
				p1c_ = r1 + p1c_;
			else
			{
				p1c_ = p1c_ + 1;
				p11c_ = p1c_ + 10;
				if (p1c_ <= 21 && p11c_ <= 21)
					p1c_ = p11c_;
				if (p1c_ > 21 && p11c_ > 21)
				{
					cout << "P1 busted:P2 wins";
					return 0;
				}
			}
		}
		if (x >= 3)
		{
			srand(time(0));
			r1 = (rand() % 13) + 1;
			if (r1 != 1)

				p1c_ = r1 + p1c_;
			else
			{
				p1c_ = p1c_ + 1;
				p11c_ = p1c_ + 10;
				if (p1c_ <= 21 && p11c_ <= 21)
					p1c_ = p11c_;
				if (p1c_ > 21 && p11c_ > 21)
				{
					cout << "P1 busted:P2 wins";
					return 0;
				}
			}
		}
		if (x >= 4)
		{
			srand(time(0));
			r1 = (rand() % 13) + 1;
			if (r1 != 1)
				p1c_ = r1 + p1c_;
			else
			{
				p1c_ = p1c_ + 1;
				p11c_ = p1c_ + 10;
				if (p1c_ <= 21 && p11c_ <= 21)
					p1c_ = p11c_;
				if (p1c_ > 21 && p11c_ > 21)
				{
					cout << "P1 busted:P2 wins";
					return 0;
				}
			}
		}
		if (x >= 5)
		{
			srand(time(0));
			r1 = (rand() % 13) + 1;
			if (r1 != 1)
				p1c_ = r1 + p1c_;
			else
			{
				p1c_ = p1c_ + 1;
				p11c_ = p1c_ + 10;
				if (p1c_ <= 21 && p11c_ <= 21)
					p1c_ = p11c_;
				if (p1c_ > 21 && p11c_ > 21)
				{
					cout << "P1 busted:P2 wins";
					return 0;
				}
			}
		}
		if (p1c_ > 21)
		{
			cout << "P1 is busted: P2 wins";
			return 0;
		}
		cout << "P1 score is " << p1c_ << endl;
		// p2 random number
		if (x >= 2)
		{
			srand(time(0));
			r2 = (rand() % 13) + 1;

			if (r2 != 1)
				p2c_ = r2 + p2c_;
			else
			{
				p2c_ = p2c_ + 1;
				p22c_ = p2c_ + 10;
				if (p2c_ <= 21 && p22c_ <= 21)
					p1c_ = p22c_;
				if (p2c_ > 21 && p22c_ > 21)
				{
					cout << "P2 busted:P1 wins";
					return 0;
				}
			}
		}
		if (x >= 3)
		{
			srand(time(0));
			r2 = (rand() % 13) + 1;

			if (r2 != 1)
				p2c_ = r2 + p2c_;
			else
			{
				p2c_ = p2c_ + 1;
				p22c_ = p2c_ + 10;
				if (p2c_ <= 21 && p22c_ <= 21)
					p1c_ = p22c_;
				if (p2c_ > 21 && p22c_ > 21)
				{
					cout << "P2 busted:P1 wins";
					return 0;
				}
			}
		}
		if (x >= 4)
		{
			srand(time(0));
			r2 = (rand() % 13) + 1;
			if (r2 != 1)
				p2c_ = r2 + p2c_;
			else
			{
				p2c_ = p2c_ + 1;
				p22c_ = p2c_ + 10;
				if (p2c_ <= 21 && p22c_ <= 21)
					p1c_ = p22c_;
				if (p2c_ > 21 && p22c_ > 21)
				{
					cout << "P2 busted:P1 wins";
					return 0;
				}
			}
		}
		if (x >= 5)
		{
			srand(time(0));
			r2 = (rand() % 13) + 1;
			if (r2 != 1)
				p2c_ = r2 + p2c_;
			else
			{
				p2c_ = p2c_ + 1;
				p22c_ = p2c_ + 10;
				if (p2c_ <= 21 && p22c_ <= 21)
					p1c_ = p22c_;
				if (p2c_ > 21 && p22c_ > 21)
				{
					cout << "P2 busted:P1 wins";
					return 0;
				}
			}
		}
		if (p2c_ > 21)
		{
			cout << "P2 busted:P1 wins";
			return 0;
		}
		cout << "P2 score is " << p2c_ << endl;
		if (p1c_ > p2c_)
			cout << "Player 1 wins" << endl;
		else
			cout << "Player 2 wins" << endl;
	}
	else
		cout << "Invalid input\n";
	return 0;
}
