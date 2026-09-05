// Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

// Input : 897    9    13
// Toggle all bits from position 9 to 13 of input number ie 897.

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    int iResult = 0;
    int iMask = 0;
    int iCnt = 0;

    for(iCnt = iPos1; iCnt <= iPos2; iCnt++)
    {
        iMask = iMask | (1 << (iCnt - 1));
    }

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    int iPosition1 = 0, iPosition2 = 0;
    int iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    cout<<"Enter first position : ";
    cin>>iPosition1;

    cout<<"Enter second position : ";
    cin>>iPosition2;

    iRet = ToggleBit(iValue, iPosition1, iPosition2);

    cout<<"Modified Number is : "<<iRet<<"\n";

    return 0;
}