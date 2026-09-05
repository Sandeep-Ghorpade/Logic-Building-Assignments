// Write a program which accept one number and position from user and off that bit.Return modified number.

// Input : 10    2
// Output : 8

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    int iMask = 1;
    int iResult = 0;

    iMask = iMask<<(iPos - 1);

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    int iPosition = 0;
    int iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    cout<<"Enter Position : ";
    cin>>iPosition;

    iRet = OffBit(iValue, iPosition);

    cout<<"Modified number is : "<<iRet<<"\n";

}