/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Difference of summation of even and odd elements
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    iDiff = iSumEven - iSumOdd;
    return iDiff;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    // Step 2 : Use that memory
    iRet = Difference(ptr,iSize);
    
    printf("Result is : %d\n",iRet);

    // Step 3 : Free the memory 
    free(ptr);

    return 0;
}