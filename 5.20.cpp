#include <iostream>
using namespace std;

int main()
{
   int side
   int hypotenuse
   long int hypotenuseSquared;//б�ߵ�ƽ��
   long int sides Squared;//ֱ�Ǳߵ�ƽ����

   cout << "Side 1\tSide 2\tSide3" << endl;

   for ( long side1 = 1; side1 <= 500; side1++ )
   {
      for ( long side2 = side1; side2 <= 500; side2++ )
      {
         for ( long hypotenuse = side2; hypotenuse <= 500; hypotenuse++ )
         {
            hypotenuseSquared = hypotenuse * hypotenuse;

            sidesSquared = side1 * side1 + side2 * side2;

            if ( hypotenuseSquared == sides Squared )
            {
               cout << side1 << '\t' << side2 << '\t'
                  << hypotenuse << '\n';
            } // end if
         } // end for
      } // end for
   } // end for

   // display total number of triples found
   cout << "A total of " << count << " triples were found." << endl;
} // end main


