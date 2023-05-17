#include <iostream>

using namespace std;

int main()
{
    int i = 1, c, n, t, radius, space;
    cout << "Enter circle Diameter";
    cin >> n;
    n = n / 2;
    t = n;

    while (i <= n)
    {
        for (space = 1; space <= (t - 1); space++)
        {
            cout << ".";
        }
        c = 0;
        while (c < ((2 * i) + 1))
        {

            cout << "*";
            c++;
        }
        for (space = 1; space <= (t - 1); space++)
        {
            cout << ".";
        }
        i++;
        cout << endl;
        t--;
    }
    for (int i = 2; i <= 3; i++)
    {
        for (int j = 1; j <= ((n * 2) + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    i = n - 1;
    t = 1;
    while (i > 0)
    {
        for (space = 0; space < (t); space++)
        {
            cout << ".";
        }
        c = 0;
        while (c < ((2 * i) + 1))
        {

            cout << "*";
            c++;
        }
        for (space = 0; space < t; space++)
        {
            cout << ".";
        }
        i--;
        cout << endl;
        t++;
    }
    return 0;
}
