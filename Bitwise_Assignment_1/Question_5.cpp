// Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 2147483649 ;
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
        cout<<"First and last bit is ON\n";
    }
    else
    {
        cout<<"First and last bit is OFF\n";
    }

}