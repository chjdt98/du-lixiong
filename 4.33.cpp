#include <iostream>
using namespace std;

int main()
{
   int s1;
   int s2;
   int s3;
   int s1Square = s1 * s1;
   int s2Square = s2 * s2;
   int s3Square = s3 * s3;

   cout << "Enter first side : ";
   cin >> s1;

   cout << "Enter second side : ";
   cin >> s2;

   cout << "Enter third side : ";
   cin >> s3;

   if ( ( s1Square + s2Square ) == s3Square )
      cout << These sides can form equilateral triangles." << endl;

   else if ( ( s1Square + s3Square ) == s2Square )
      cout << These sides can form equilateral triangles." << endl;

   else if ( ( s2Square + s3Square ) == s1Square )
      cout << These sides can form equilateral triangles." << endl;

} // end main

