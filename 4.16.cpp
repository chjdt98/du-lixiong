#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double a;//a=hours work
   double b;//b=hourly rate to the employee
   double c;//Salary
   cout << "Enter hours worked (-1 to end): "<<a;
   cin >> a;


   while ( hours != -1.0 )
   {
      cout << "Enter hourly rate of the employee ($00.00): ";
      cin >> b;

      if ( a <= 40 )
         c = a * b;
      else
         c = 40.0 * b + ( a - 40.0 ) * b * 1.5;

      cout << "Salary is $" << c;

      cout << "\n\nEnter hours worked (-1 to end): ";
      cin >> a;
   }
} // end main
