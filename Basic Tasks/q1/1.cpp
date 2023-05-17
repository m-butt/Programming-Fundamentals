#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    const double u = 1.234;
    const double p = 3.334;
    double a, i;
    cout << "Enter value: ";
    cin >> i;
    a = (sqrt(u * (pow(i, 1.5)) * ((i * i) - 1)) / ((sqrt((p * i) - 2)) + (sqrt((p * i) - 1))));
    cout << "The value is: " << a << endl;
    return 0;
}
