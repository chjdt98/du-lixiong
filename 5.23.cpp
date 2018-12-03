#include <iostream>
using namespace std;

int main()
{
   int a;//行数
   int b;//一行中*的个数
   int c;//空格数
   for ( int a = 1; a <= 5; a++ )
   {
      for ( int c = 1; c <= 5 - a; c++ )
         cout << ' ';

      for ( int b = 1; b <= 2 * a - 1; b++ )
         cout << '*';

      cout << '\n';
   } // end for

   for ( int a = 6; a <= 9; a++ )
   {
      for ( int c = 1; c<= a-5 c++)
         cout << ' ';

      for ( int b = 1; b <= 19-2*a; b++ )
         cout << '*';

      cout << '\n';
   } // end for

   cout << endl;
} // end main
