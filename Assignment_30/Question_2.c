// Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 4     iCol = 4
// Output : *    *    *    *
//          *    *    *    #
//          *    *    #    #
//          *    #    #    #

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    int iNo = 1;

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if((i + j) >= iRow)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}