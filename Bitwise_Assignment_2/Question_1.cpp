// Write a program which accept one number from user and OFF 7th bit of that number if it is on.Return modified number.

// Input : 79
// Output : 15

#include<iostream>
using namespace std;
 
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 4294967231 ;
    UINT iResult = 0;

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