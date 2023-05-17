#include <iostream>

using namespace std;

int main()
{
    int i = 1, c, n, t, space;
    cout << "Enter Numbers of Rows";
    cin >> n;
    t = n;
    while (i <= n)
    {
        for (space = 1; space <= (t - 1); space++)
        {
            cout << ".";
        }
        c = 1;
        while (c <= (2 * i) - 1)
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
    return 0;
}
