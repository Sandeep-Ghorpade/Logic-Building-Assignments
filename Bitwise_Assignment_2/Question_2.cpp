// Write a program which accept one number from user and OFF 7th and 10th bit of that number if it is on.Return modified number.

// Input : 577
// Output : 1

#include<iostream>
using namespace std;
 
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << 6;
    iMask1 = ~iMask1;
    iMask2 = iMask2 << 9;
    iMask2 = ~iMask2;

    iMask = iMask1 & iMask2;

    iResult = iMask & iNo;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Modified number is : "<<iRet<<"\n";

}