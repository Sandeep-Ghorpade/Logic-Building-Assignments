// Write a program which accept one number from user and check whether 9th or 12th bit is on or off.

// Input : 257
// Output : true

#include <iostream>
using namespace std;

typedef unsigned int UINT;
typedef bool BOOL;

BOOL ChkBit(UINT iNo)
{
    bool bResult = false;
    int iResult = 0;
    int iPos = 0;

    iResult = iNo;

    for(iPos = 1; iPos <= 32; iPos++)
    {
        if((iPos == 9) || (iPos == 12))
        {
            if((iResult & 1) == 1)
            {
                bResult = true;
                break;
            }
            else
            {
                bResult = false;
            }
        }
        iResult = iResult>>1;
    }

    return bResult;

}

int main()
{
    UINT iValue = 0;
    BOOL bRet = false;

    cout<<"Enter Number : ";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"9th or 12th bit is on\n";
    }
    else
    {
        cout<<"9th or 12th bit is off\n";
    }

    return 0;
}