#include <iostream>
using namespace std;

int main()
{
   int total = 0;
   int number;
   int value;

   cout << "Enter the number of values to enter" << number
       << "Enter the value to enter: \n" <<value;
   cin >> number;
   for ( int i = 1; i <= number; i++ )
   {
      cin >> value;
      total += value;
   } // end for

   cout << "Sum of the " << number << " values is " << total << endl;
} // end main


