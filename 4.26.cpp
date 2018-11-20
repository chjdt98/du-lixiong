#include <iostream>
using namespace std;

int main()
{
   int number = 0;
   int a1;
   int a2;
   int a4;
   int a5;
   int as = 0;

   while ( as != 5 ) //输入五位数
   {
      cout << "Enter a five-digit number: ";
      cin >> number;

      if ( number < 100000 )
      {
         if ( number > 9999 )
            digits = 5;
         else
            cout << "Number must be 5 digits" << endl;
      } // end if
      else
         cout << "Number must be 5 digits" << endl;
   } // end while

   a1 = number / 10000;
   a2 = number % 10000 / 1000;
   a4 = number % 10000 % 1000 % 100 / 10;
   a5 = number % 10000 % 1000 % 100 % 10;

   if ( a1 == a5 )
   {
      if ( a2 == a4 )
         cout << number << " is a palindrome number" << endl;
      else
         cout << number << " is not a palindrome." << endl;
   }
   else
      cout << number << " is not a palindrome." << endl;
} // end main
