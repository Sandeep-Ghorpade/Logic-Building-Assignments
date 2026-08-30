// Accept Character from user and check whether it is alphabet or not (A - Z).
// Input : F
// Output : TRUE
// Input : $
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    bool bFlag = false;

    if(((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122)))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return 0;
}