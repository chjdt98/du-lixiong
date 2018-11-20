#include <iostream>
using namespace std;

int main()
{
   int number;
   int factorial = 1;

   cout << "Enter a Non-negative integers: ";
   cin >> number;

   while ( number > 0 )
   {
      factorial *= number;
      number--;
   } // end while

   cout << number << "! is "<< factorial << endl;
} // end main

