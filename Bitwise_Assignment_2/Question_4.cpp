// Write a program which accept one number from user and toggle 7th and 10th bit of that number.Return modified number.

// Input : 137
// Output : 713

#include<iostream>
using namespace std;
 
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;

    iResult = iNo ^ (iMask1 ^ iMask2);

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Modified number is : "<<iRet<<"\n";

}