#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   long double pi = 0.0;
   long double a;
   long number = 1000;

   cout << fixed << setprecision( 8 );

   cout << "Accuracy set at: " << accuracy << "\n\nterm\t\tpi\n";

   for ( long loop = 1; loop <= number ; loop++ )
   {
      a=loop*2-1
      if ( loop % 2 == 1 )
         pi += 4.0 / a;
      else
         pi -= 4.0 / a;

      cout << loop << "\t\t" << pi << '\n';

   } // end for

   cout << endl;
} // end main


