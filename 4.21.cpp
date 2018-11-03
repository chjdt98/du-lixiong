#include <iostream>


using namespace std;

int main()
{
    int binary=0,decima=1,number=0;
    cout<<"Enter a binary number:";
    cin>>binary;
    number=binary;
    while(number!=0)
    {
        decima+=decima*number%10
        decima*=2
        number/=10
    }
    cout<<"The decimal equivalent of:"<<number<<
    "is"<<decimal<<endl;
    return 0
}
