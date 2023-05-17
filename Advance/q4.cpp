#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	int s, qu, as;
	double totalq1 = 0, totala1 = 0;
	cout << "Enter the number of Students ";
	cin >> s;
	cout << "Enter number of Quizzes ";
label1:
	cin >> qu;
	if (qu < 6)
	{
		cout << "Atlest 6 Quizzes should be Enter ";
		goto label1;
	}
	cout << "Enter number of Assignments ";
label2:
	cin >> as;
	if (as < 6)
	{
		cout << "Atlest 6 Assignments should be  ";
		goto label2;
	}
	string regno[s];
	double mid[s];
	double quizzes[s][qu];
	double totalq[s];
	double assig[s][as];
	double totala[s];
	double finalE[s];
	double finals[s];
	string grade[20];
	cin.clear();
	cin.ignore();
	for (int i = 0; i < s; i++)
	{
		totala1 = 0;
		totalq1 = 0;
		cout << "Enter REG.NO ";
		cin >> regno[i];
		cout << "Enter Mid term score ";
	lable3:
		cin >> mid[i];
		if (mid[i] < 0 || mid[i] > 25)
		{
			cout << "Enter a valid +ve number and less then 26 ";
			goto lable3;
		}
		for (int j = 0, q = 1; j < qu; j++, q++)
		{
			cout << "Enter quizze " << q << " numbers ";
		lable4:
			cin >> quizzes[i][j];
			if (quizzes[i][j] < 0 || quizzes[i][j] > 10)
			{
				cout << "Enter a valid +ve number and less then 11 ";
				goto lable4;
			}
		}
		for (int j = 0, q = 1; j < qu; j++, q++)
		{
			totalq1 = totalq1 + quizzes[i][j];
		}
		totalq[i] = ((totalq1) / (qu * 1.0));
		for (int j = 0, q = 1; j < as; j++, q++)
		{
			cout << "Enter assignment " << q << " numbers ";
		loop:
			cin >> assig[i][j];
			if (assig[i][j] < 0 || assig[i][j] > 15)
			{
				cout << "Enter a valid +ve number and less then 16 ";
				goto loop;
			}
		}
		for (int j = 0, q = 1; j < as; j++, q++)
		{
			totala1 = totala1 + assig[i][j];
		}
		totala[i] = ((totala1) / (as * 1.0));
		cout << "Enter Final score ";
	lable5:
		cin >> finalE[i];
		if (finalE[i] < 0 || finalE[i] > 50)
		{
			cout << "Enter a valid +ve number and less then 51 ";
			goto lable5;
		}
		finals[i] = finalE[i] + totala[i] + totalq[i] + mid[i];
		if (finals[i] >= 90)
			grade[i] = {"A+    4.00"};
		else if (finals[i] >= 86)
			grade[i] = {"A     4.00"};
		else if (finals[i] >= 82)
			grade[i] = {"A-    3.67"};
		else if (finals[i] >= 78)
			grade[i] = {"B+     3.33"};
		else if (finals[i] >= 74)
			grade[i] = {"B      3.00"};
		else if (finals[i] >= 70)
			grade[i] = {"B-     2.67"};
		else if (finals[i] >= 66)
			grade[i] = {"C+     2.33"};
		else if (finals[i] >= 62)
			grade[i] = {"C      2.00"};
		else if (finals[i] >= 58)
			grade[i] = {"C-     1.67"};
		else if (finals[i] >= 54)
			grade[i] = {"D+     1.33"};
		else if (finals[i] >= 50)
			grade[i] = {"D      1.00"};
		else if (finals[i] < 50)
			grade[i] = {"F      0.00"};
	}
	for (int i = 0; i < s; i++)
	{
		cout << regno[i] << setw(10) << finals[i] << setw(10) << grade[i] << endl;
	}

	return 0;
}
