#include <iostream>
using namespace std;

int main()
{
   int number;
   int value;
   int smallest;

   cout << "Enter the number of values to enter "<<number <<endl;
   cout << "Enter the value to enters:\n" << value  << endl;
   cin >> number >> smallest;

   for ( int i = 1; i <= number; i++ )
   {
      cin >> value;

      if ( value < smallest )
         smallest = value
   } // end for

   cout << "\nThe smallest integer is: " << smallest << endl;
} // end main


