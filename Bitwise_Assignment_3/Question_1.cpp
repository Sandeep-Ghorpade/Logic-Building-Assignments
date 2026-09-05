// Write a program which accept one number and position from user and check whether bit at that position is on or off.If bit is one return TRUE otherwise return FALSE.

// Input : 10    2
// Output : TRUE

#include <iostream>
using namespace std;

typedef unsigned int UINT;
typedef bool BOOL;

BOOL ChkBit(UINT iNo, int iPos)
{
    int iMask = 1;
    bool bResult = false;
    int iResult = 0;

    iMask = iMask<<(iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }
    
    return bResult;

}

int main()
{
    UINT iValue = 0;
    int iPosition = 0;
    bool bRet = false;

    cout<<"Enter Number : ";
    cin>>iValue;

    cout<<"Enter Position : ";
    cin>>iPosition;

    bRet = ChkBit(iValue, iPosition);

    if(bRet == true)
    {
        cout<<"Bit is on at "<<iPosition<<" position\n";
    }
    else
    {
        cout<<"Bit is off at "<<iPosition<<" position\n";
    }


}