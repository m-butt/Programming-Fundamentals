#include <iostream>

using namespace std;

int main()
{
   int i = 1, n, t, space, s = 0, c;
   cout << "Enter nuber of rows";
   cin >> n;
   t = n + 2;

   while (i <= n)
   {
      for (space = 1; space <= (t); space++)
      {
         cout << " ";
      }
      s++;
      do
      {
         cout << "*";
         c++;
      } while (!(c % s == 0));
      cout << endl;
      c = i;
      i++;
      s = s + 4;
      t = t - 2;
   }
   c = n;
   s = s - 4;
   while (c <= s)
   {
      cout << "*";
      c++;
   }
   i = n - 1;
   t = 2;
   cout << endl;
   s = (n * (i - 1)) + 1;
   while (i > 0)
   {
      for (space = 1; space <= t; space++)
      {
         cout << " ";
      }
      c = 0;

      do
      {
         cout << "*";
         c++;
      } while (!(c % s == 0));
      cout << endl;
      c = 1;
      i--;
      s = s - 4;
      t = t + 2;
   }
   return 0;
}
