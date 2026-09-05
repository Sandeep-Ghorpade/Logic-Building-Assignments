// Write a program which accept two numbers from user and display position of common ON bits from that two numbers.

// Input : 10    15    (1010    1111)
// Output : 2    4

#include <iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBit(UINT iNo1, UINT iNo2)
{
    int iMask = 0;
    int iResult = 0;
    int iPos = 0;

    iResult = iNo1 & iNo2;

    for(iPos = 1; iPos <= 32; iPos++)
    {
        if((iResult & 1) == 1)
        {
            cout<<iPos<<"\t";
        }
        iResult = iResult>>1;
    }
    cout<<"\n";

}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    cout<<"Enter first Number : ";
    cin>>iValue1;

    cout<<"Enter second Number : ";
    cin>>iValue2;

    CommonBit(iValue1, iValue2);

    return 0;
}