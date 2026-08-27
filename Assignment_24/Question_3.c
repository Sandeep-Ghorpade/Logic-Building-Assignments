// Accept N numbers from user and return the difference between largest and smallest number .
// Input :  6
// Elements : 85    66  3   66  93    88
// Output : 90  (93 - 3)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0,iMax = 0;
    int iMin = Arr[iCnt];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }

        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return (iMax - iMin);
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
    iRet =  Difference(ptr, iSize);

    printf("Difference is : %d\n",iRet);

    free(ptr);

    return 0;
}