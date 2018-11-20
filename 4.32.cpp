#include <iostream>
using namespace std;

int main()
{
   double s1;
   double s2;
   double s3;

   cout << "Enter first side : ";
   cin >> s1;

   cout << "Enter second side : ";
   cin >> s2;

   cout << "Enter third side :";
   cin >> s3;

   if ( side1 + side2 > side3 )
   {
      if ( side2 + side3 > side1 )
      {
         if ( side3 + side1 > side2 )
            cout << "These could be sides to a triangle." << endl;
         else
            cout << "These edges can not form triangles."<< endl;

      }

         cout << "These could be sides to a triangle." << endl;
      else
         cout << "These could be sides to a triangle." << endl;

   }
      cout << "These could be sides to a triangle." << endl;
   else
      cout << "These could be sides to a triangle." << endl;

} // end main

