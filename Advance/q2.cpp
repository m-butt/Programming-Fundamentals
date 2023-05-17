#include <iostream>
using namespace std;

int main()
{
	int arr1[99] = {}, arr2[99] = {}, arr3[99] = {}, arr4[99] = {}, arr5[99] = {};
	int s1, s2, s3, s4, s5;
	bool dup = false;
	int temp;
	cout << "Enter size of Array 1 between 1 and 100: ";
	cin >> s1;
	cout << "Enter size of Array 2 between 1 and 100: ";
	cin >> s2;
	cout << "Enter size of Array 3 between 1 and 100: ";
	cin >> s3;
	cout << "Enter size of Array 4 between 1 and 100: ";
	cin >> s4;
	cout << "Enter size of Array 5 between 1 and 100: ";
	cin >> s5;
	// const int s = s1 + s2 + s3 + s4 + s5;
	int ma[600] = {};
	cout << "\nEnter array 1 of size " << s1 << " in ascending order\n";
	for (int i = 1; i < s1 + 1; i++)
	{
		cin >> arr1[i];
		if (i > 0 && arr1[i] <= arr1[i - 1])
		{
			cout << "ERROR!! Only ascending order. Input again:\n";
			cin >> arr1[i];
		}
	}
	cout << "\nEnter array 2 of size " << s2 << " in ascending order\n";
	for (int i = 1; i < s2 + 1; i++)
	{
		cin >> arr2[i];
		if (i > 0 && arr2[i] <= arr2[i - 1])
		{
			cout << "ERROR!! Only ascending order. Input again:\n";
			cin >> arr2[i];
		}
	}
	cout << "\nEnter array 3 of size " << s3 << " in ascending order\n";
	for (int i = 1; i < s3 + 1; i++)
	{
		cin >> arr3[i];
		if (i > 0 && arr3[i] <= arr3[i - 1])
		{
			cout << "ERROR!! Only ascending order. Input again:\n";
			cin >> arr3[i];
		}
	}
	cout << "\nEnter array 4 of size " << s4 << " in ascending order\n";
	for (int i = 1; i < s4 + 1; i++)
	{
		cin >> arr4[i];
		if (i > 0 && arr4[i] <= arr4[i - 1])
		{
			cout << "ERROR!! Only ascending order. Input again:\n";
			cin >> arr4[i];
		}
	}
	cout << "\nEnter array 5 of size " << s5 << " in ascending order\n";
	for (int i = 1; i < s5 + 1; i++)
	{
		cin >> arr5[i];
		if (i > 0 && arr5[i] <= arr5[i - 1])
		{
			cout << "ERROR!! Only ascending order. Input again:\n";
			cin >> arr5[i];
		}
	}
	int arr1pt = s1, arr2pt = s2, arr3pt = s3, arr4pt = s4, arr5pt = s5;
	bool arr1lim, arr2lim, arr3lim, arr4lim, arr5lim;
	arr1[0] = -1000000000;
	arr2[0] = -1000000000;
	arr3[0] = -1000000000;
	arr4[0] = -1000000000;
	arr5[0] = -1000000000;
	int masize = s1 + s2 + s3 + s4 + s5 + 5;
	for (int i = 0; i < s1 + s2 + s3 + s4 + s5; i++)
	{
		dup = false;
		if (arr1[arr1pt] >= arr2[arr2pt] && arr1[arr1pt] >= arr3[arr3pt] && arr1[arr1pt] >= arr4[arr4pt] && arr1[arr1pt] >= arr5[arr5pt])
		{
			temp = arr1[arr1pt];
			arr1pt--;
		}
		if (arr2[arr2pt] >= arr1[arr1pt] && arr2[arr2pt] >= arr3[arr3pt] && arr2[arr2pt] >= arr4[arr4pt] && arr2[arr2pt] >= arr5[arr5pt])
		{
			temp = arr2[arr2pt];
			arr2pt--;
		}
		if (arr3[arr3pt] >= arr2[arr2pt] && arr3[arr3pt] >= arr1[arr1pt] && arr3[arr3pt] >= arr4[arr4pt] && arr3[arr3pt] >= arr5[arr5pt])
		{
			temp = arr3[arr3pt];
			arr3pt--;
		}
		if (arr4[arr4pt] >= arr2[arr2pt] && arr4[arr4pt] >= arr3[arr3pt] && arr4[arr4pt] >= arr1[arr1pt] && arr4[arr4pt] >= arr5[arr5pt])
		{
			temp = arr4[arr4pt];
			arr4pt--;
		}
		if (arr5[arr5pt] >= arr2[arr2pt] && arr5[arr5pt] >= arr3[arr3pt] && arr5[arr5pt] >= arr4[arr4pt] && arr5[arr5pt] >= arr1[arr1pt])
		{
			temp = arr5[arr5pt];
			arr5pt--;
		}
		for (int j = 0; j < i; j++)
		{
			if (ma[j] == temp)
				dup = true;
		}
		if (!dup)
			ma[i] = temp;
		if (dup)
		{
			i--;
			masize--;
		}
	}
	for (int i = 0; i < s1 + s2 + s3 + s4 + s5; i++)
	{
		cout << ma[i] << " ";
	}
}
