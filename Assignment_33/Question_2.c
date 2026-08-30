// Accept Character from user and check whether it is capital or not (A - Z).
// Input : F
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    bool bFlag = false;

    if(((ch >= 65) && (ch <= 90)))
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return 0;
}