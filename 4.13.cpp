#include <iostream>
using namespace std;

int main()
{
   double gallons;
   double miles;
   double totalGallons = 0;
   double totalMiles = 0;

   double MPG;
   double totalMPG;


   cout << "Enter miles driven (-1 to quit): ";
   cin >> miles;
   cout << fixed;

   while ( miles != -1 )
   {
      cout << "Enter gallons used: ";
      cin >> gallons;

      totalMiles += miles;
      totalGallons += gallons;

      if ( gallons != 0 )
      {
         MPG =  miles / gallons;
         cout << "MPG: " << MPG;
      } // end if

      if ( totalGallons != 0 )
      {
         totalMPG = totalMiles / totalGallons;
         cout << "\nTotal MPG: " << MPG;
      } // end if

      cout << "\n\nEnter miles driven (-1 to quit): ";
      cin >> miles;
   } // end while
} // end main


