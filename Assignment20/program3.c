/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Accept N numbers from user and accept another number NO and return index of last occurence of NO                  
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOcc(int Arr[], int iSize, int iNO)
{
    int iCnt = 0;
    int iRet = -1;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == iNO))
        {
           iRet = iCnt;
        }
    }
    
    return iRet;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int  NO =0;
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

    printf("Enter the number  : \n");
    scanf("%d",&NO);

    iRet = LastOcc(ptr,iSize, NO);
    
    if(iRet == -1)
    {
        printf("Number is not present \n");
    }
    else
    {
        printf("last occurence is at index %d \n",iRet);
    }

    free(ptr);

    return 0;
}