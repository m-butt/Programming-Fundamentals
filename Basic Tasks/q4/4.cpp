#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, q, w, y, xa, xb;
    cout << "Enter the coefficient of x^2" << endl;
    cin >> x;
    cout << "Enter the  coefficient of x" << endl;
    cin >> q;
    cout << "Enter the constant" << endl;
    cin >> w;
    y = pow(q, 2) - (4 * x * w);
    xa = ((-q) + (pow(((q * q) - (4 * x * w)), 0.5))) / (2 * x);
    xb = ((-q) - (pow(((q * q) - (4 * x * w)), 0.5))) / (2 * x);
    y < 0 ? cout << "Root = infinity" << endl : cout << "" << endl;
    y == 0 ? cout << "x =" << xa : cout << "";
    y > 0 ? cout << "xa =" << xa << endl : cout << "" << endl;
    y > 0 ? cout << "xb =" << xb << endl : cout << "" << endl;
    return 0;
}
