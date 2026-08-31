// Write a program which accept string from user and display it in reverse order.

// Input : "MarvellouS"
// Output : "SuollevraM"

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Updated string : %s\n",arr);

    return 0;
}
