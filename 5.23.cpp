#include <iostream>
using namespace std;

int main()
{
   int a;//����
   int b;//һ����*�ĸ���
   int c;//�ո���
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
