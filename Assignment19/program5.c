/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Accept N numbers from user and accept another number NO and return frequency of NO from it                     
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[], int iSize, int iNO)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == iNO))
        {
           iCount++;
        }
    }
    
    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0, NO =0;
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

    printf("Enter the number to count frequency : \n");
    scanf("%d",&NO);

    iRet = Frequency(ptr,iSize, NO);
    
    printf("%d \n",iRet);

    free(ptr);

    return 0;
}