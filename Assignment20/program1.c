/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Accept N numbers from user and accept another number NO and check whether NO is present or not                    
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize, int iNO)
{
    int iCnt = 0;
    bool bRet = false;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == iNO))
        {
           bRet = true;
           break;
        }
    }
    
    return bRet;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int  NO =0;
    bool bRet = false;
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

    bRet = Check(ptr,iSize, NO);
    
    if(bRet == true)
    {
        printf("Number is present \n");
    }
    else
    {
        printf("Number is not present \n");
    }

    free(ptr);

    return 0;
}