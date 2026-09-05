// Write a program which accept one number from user and on its first 4 bits.Return modified number.

// Input : 73
// Output : 79

#include<iostream>
using namespace std;
 
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 15;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = OnBit(iValue);

    cout<<"Modified number is : "<<iRet<<"\n";

}