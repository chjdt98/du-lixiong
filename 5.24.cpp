#include <iostream>
using namespace std;

int main()
{
   int size;
   int a //ͬ5.24
   int b
   int c

   do
   {
      cout << "Enter an odd number for the diamond size (1-19): \n";
      cin >> size;
   } while ( ( size < 1 ) || ( size > 19 ) || ( ( size % 2 ) != 1 ) );

   for ( int a = 1; a <= size ; a += 2 )
   {

      for ( int c = ( size - a ) / 2; c >= 1; c-- )
         cout << ' ';


      for ( int b = 1; b <= a; b++ )
         cout << '*';

      cout << '\n';
   } // end for

   for ( int a = size-2; a >= 0; a -= 2 )
   {
      for ( int c = ( size - a ) / 2; c >= 1; c-- )
         cout << ' ';

      for ( int b = 1; b <= a; b++ )
         cout << '*';

      cout << '\n';
   } // end for

   cout << endl;
} // end main


