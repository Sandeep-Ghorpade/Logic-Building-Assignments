// Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

// Input : A
// Output : Decimal       65
// Output : Octal         0101
// Output : Hexadecimal   0X41


#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
{
    if(((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122)))
    {
        printf("decimal : %d\n",ch);
        printf("Octal : %o\n",ch);
        printf("Hexadecimal : %x\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
