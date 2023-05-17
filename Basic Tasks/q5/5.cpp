#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, c;
    string B, G;
    cout << "Enter 1 to find color of a square" << endl;
    cout << "Enter 2 to compare color of two blocks" << endl;
    cin >> a;
    if (a == 1)
    {
        cout << "Enter the number of  square" << endl;
        cin >> b;
        if (b > 0 && b < 82)
        {
            if (b == 1 || b == 4 || b == 7 || b == 12 || b == 15 || b == 18 || b == 19 || b == 22 || b == 25 || b == 30 || b == 33 || b == 36 || b == 37 || b == 40 || b == 43 || b == 48 || b == 51 || b == 54 || b == 55 || b == 58 || b == 61 || b == 66 || b == 69 || b == 72 || b == 73 || b == 76 || b == 79)
                cout << "Colour of the square is GREY" << endl;
            if (b == 2 || b == 5 || b == 8 || b == 10 || b == 13 || b == 16 || b == 20 || b == 23 || b == 26 || b == 28 || b == 31 || b == 34 || b == 38 || b == 41 || b == 44 || b == 46 || b == 49 || b == 52 || b == 56 || b == 59 || b == 62 || b == 64 || b == 67 || b == 70 || b == 74 || b == 77 || b == 80)
                cout << "Colour of the square is BLUE" << endl;
            if (b == 3 || b == 6 || b == 9 || b == 11 || b == 14 || b == 17 || b == 21 || b == 24 || b == 27 || b == 29 || b == 32 || b == 35 || b == 39 || b == 42 || b == 45 || b == 47 || b == 50 || b == 53 || b == 57 || b == 60 || b == 63 || b == 65 || b == 68 || b == 71 || b == 75 || b == 78 || b == 81)
                cout << "Colour of the square is RED" << endl;
        }
        else
            cout << "Incorrect Input" << endl;
    }
    else
    {
        cout << "Enter the first number" << endl;
        cin >> b;
        cout << "Enter the second number" << endl;
        cin >> c;
        if ((b > 0 && b < 82) && (c > 0 && c < 82))
        {
            if (b == 1 || b == 4 || b == 7 || b == 12 || b == 15 || b == 18 || b == 19 || b == 22 || b == 25 || b == 30 || b == 33 || b == 36 || b == 37 || b == 40 || b == 43 || b == 48 || b == 51 || b == 54 || b == 55 || b == 58 || b == 61 || b == 66 || b == 69 || b == 72 || b == 73 || b == 76 || b == 79)
                G = "GREY";

            if (b == 2 || b == 5 || b == 8 || b == 10 || b == 13 || b == 16 || b == 20 || b == 23 || b == 26 || b == 28 || b == 31 || b == 34 || b == 38 || b == 41 || b == 44 || b == 46 || b == 49 || b == 52 || b == 56 || b == 59 || b == 62 || b == 64 || b == 67 || b == 70 || b == 74 || b == 77 || b == 80)
                G = "BLUE";

            if (b == 3 || b == 6 || b == 9 || b == 11 || b == 14 || b == 17 || b == 21 || b == 24 || b == 27 || b == 29 || b == 32 || b == 35 || b == 39 || b == 42 || b == 45 || b == 47 || b == 50 || b == 53 || b == 57 || b == 60 || b == 63 || b == 65 || b == 68 || b == 71 || b == 75 || b == 78 || b == 81)
                G = "RED";

            if (c == 1 || c == 4 || c == 7 || c == 12 || c == 15 || c == 18 || c == 19 || c == 22 || c == 25 || c == 30 || c == 33 || c == 36 || c == 37 || c == 40 || c == 43 || c == 48 || c == 51 || c == 54 || c == 55 || c == 58 || c == 61 || c == 66 || c == 69 || c == 72 || c == 73 || c == 76 || c == 79)
                B = "GREY";

            if (c == 2 || c == 5 || c == 8 || c == 10 || c == 13 || c == 16 || c == 20 || c == 23 || c == 26 || c == 28 || c == 31 || c == 34 || c == 38 || c == 41 || c == 44 || c == 46 || c == 49 || c == 52 || c == 56 || c == 59 || c == 62 || c == 64 || c == 67 || c == 70 || c == 74 || c == 77 || c == 80)
                B = "BLUE";

            if (c == 3 || c == 6 || c == 9 || c == 11 || c == 14 || c == 17 || c == 21 || c == 24 || c == 27 || c == 29 || c == 32 || c == 35 || c == 39 || c == 42 || c == 45 || c == 47 || c == 50 || c == 53 || c == 57 || c == 60 || c == 63 || c == 65 || c == 68 || c == 71 || c == 75 || c == 78 || c == 81)
                B = "RED";

            {
                if (G == B)
                    cout << "They have the same colour" << endl;
                else
                    cout << "Colours don't match" << endl;
            }
        }
        else
            cout << "Wrong input" << endl;
    }
    return 0;
}
