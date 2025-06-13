/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Accept N numbers from user and return frequency of 11 from it                     
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
           iCount++;
        }
    }
    
    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
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

    iRet = Frequency(ptr,iSize);
    
    printf("%d \n",iRet);

    free(ptr);

    return 0;
}