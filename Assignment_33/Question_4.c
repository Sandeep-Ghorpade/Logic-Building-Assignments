// Accept Character from user and check whether it is small case or not (a - z).
// Input : g
// Output : TRUE
// Input : D
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL ChkSmall(char ch)
{
    bool bFlag = false;

    if(((ch >= 97) && (ch <= 122)))
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small Character\n");
    }
    else
    {
        printf("It is not a Small Character\n");
    }

    return 0;
}