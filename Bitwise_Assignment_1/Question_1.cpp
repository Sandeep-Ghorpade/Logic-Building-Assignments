// Write a program which checks whether 15th bit is On or OFF.

#include<iostream>
using namespace std;


typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 16384;
    UINT iResult = 0;

    iResult = iMask & iNo;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
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
        cout<<"15th bit is ON\n";
    }
    else
    {
        cout<<"15th bit is OFF\n";
    }

}