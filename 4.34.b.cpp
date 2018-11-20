#include <iostream>
using namespace std;

int main()
{
   int number = 1;
   int precision;
   int factorial = 1;
   double e = 1.0;

   cout << "Enter precision of e: ";
   cin >> precision;

   while ( number < precision )
   {
      factorial *= number;
      e += 1.0 / factorial;
      number++;
   } // end while

   cout << "e is " << e << endl;
} // end main

