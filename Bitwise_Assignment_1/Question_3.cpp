// Write a program which checks whether 7th & 15th & 21st, 28th bit is On or OFF.

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 135282752;
    UINT iResult = 0;

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = ChkBit(iValue);

    if(iRet == true)
    {
        cout<<"7th & 15th & 21st, 28th bit is ON\n";
    }
    else
    {
        cout<<"7th & 15th & 21st, 28th bit is OFF\n";
    }

}