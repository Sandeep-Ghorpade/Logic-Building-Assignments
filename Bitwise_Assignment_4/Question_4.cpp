// Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF.

// Input : 10    4   7
// Output : true

#include <iostream>
using namespace std;

typedef unsigned int UINT;
typedef bool BOOL;

BOOL ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    bool bResult = false;
    int iResult = 0;
    int iCnt = 0;

    iResult = iNo;

    for(iCnt = 1; iCnt <= 32; iCnt++)
    {
        if((iCnt == iPos1) || (iCnt == iPos2))
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
    int iPosition1 = 0, iPosition2 = 0;
    BOOL bRet = false;

    cout<<"Enter Number : ";
    cin>>iValue;

    cout<<"Enter first position : ";
    cin>>iPosition1;

    cout<<"Enter second position : ";
    cin>>iPosition2;

    bRet = ChkBit(iValue, iPosition1, iPosition2);

    if(bRet == true)
    {
        cout<<"Bit at first or bit at second position is ON\n";
    }
    else
    {
        cout<<"Bit at first or bit at second position is OFF\n";
    }

    return 0;
}