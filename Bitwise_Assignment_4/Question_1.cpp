// Write a program which accept one number from user and count number of ON(1) bits in it without using % and / operator.

// Input : 11
// Output : 3

#include <iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iMask = 0;
    int iResult = 0;
    int iCount = 0, iPos = 0;

    iResult = iNo;

    for(iPos = 1; iPos <= 32; iPos++)
    {
        if((iResult & 1) == 1)
        {
            iCount++;
        }
        iResult = iResult>>1;
    }
    return iCount;

}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Number of on bits are : "<<iRet<<"\n";

    return 0;
}