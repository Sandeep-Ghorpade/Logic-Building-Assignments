//Accept two number from user and display first number in second number of times.

#include<stdio.h>
void Display(int iNo, int iFrequency)
{
    int iCount = 0;
    for(iCount = 0; iCount < iFrequency; iCount++  )
    {
        printf("%d", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter frequency");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}