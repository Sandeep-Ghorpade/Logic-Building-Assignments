// Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

// Input : %
// Output : TRUE
// Input : d
// Output : FALSE


#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    bool bFlag = false;

    if(((ch >= 33) && (ch <= 47)) || ((ch >= 58) && (ch <= 64)) || ((ch >= 91) && (ch <= 96)) || ((ch >= 123) && (ch <= 127)))
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
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character\n");
    }
    else
    {
        printf("It is not special character\n");
    }

    return 0;
}
