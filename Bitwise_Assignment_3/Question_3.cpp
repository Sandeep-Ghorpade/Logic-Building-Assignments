// Write a program which accept one number and position from user and on that bit.Return modified number.

// Input : 10    3
// Output : 14

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 1;
    int iResult = 0;

    iMask = iMask<<(iPos - 1);

    iResult = iNo | iMask;

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

    iRet = OnBit(iValue, iPosition);

    cout<<"Modified number is : "<<iRet<<"\n";

}