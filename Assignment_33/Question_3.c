// Accept Character from user and check whether it is digit or not (0 - 9).
// Input : 7
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    bool bFlag = false;

    if(((ch >= 48) && (ch <= 57)))
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

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;
}