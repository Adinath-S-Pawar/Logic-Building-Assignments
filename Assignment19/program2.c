/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description :Difference between Frequency of even numbers and odd numbers
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    iDiff = iCountEven - iCountOdd;
    return iDiff;

}

int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr,iSize);
    printf("Result is %d ",iRet);

    free(ptr);

    return 0;
}