// Write a program which accept one number from user and toggle 7th bit of that number.Return modified number.

// Input : 137
// Output : 201

#include<iostream>
using namespace std;
 
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << 6;

    iResult = iMask ^ iNo;

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