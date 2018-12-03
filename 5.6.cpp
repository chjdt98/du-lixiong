#include <iostream>
using namespace std;

int main()
{
   int value;
   int count= 0;
   int total = 0;
   int average=0

   cout << "Enter integers (9999 to end):";
   cin >> value;

   for ( int i = 1;i!=9999; i++ )

   {  total += value;
      count++;

      cin >> value;
   } // end for

   average=total/count

   cout << "The average is\n" << average << endl;

} // end main

