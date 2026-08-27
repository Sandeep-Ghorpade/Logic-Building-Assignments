// Accept N numbers from user and display all such numbers which contains 3 digits in it.
// Input :  6
// Elements : 8225      665     3       76      953     858
// Output : 665     953     858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > 99 && Arr[iCnt] < 1000)
        {
            printf("%d\t",Arr[iCnt]);
        }

    }
    printf("\n");
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements : \n",iSize);

    for(iCnt; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }
    Digits(ptr, iSize);

    free(ptr);

    return 0;
}