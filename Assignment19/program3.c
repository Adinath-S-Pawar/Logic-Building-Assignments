/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Check if numbers contain 11 or not
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;
    bool flag = false;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
           flag = true;
           break;
        }
    }
    
    return flag;
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    bRet = Check(ptr,iSize);
    
    if(bRet == true)
    {
        printf("It contains 11 \n");
    }
    else
    {
        printf("11 not present \n");
    }

    free(ptr);

    return 0;
}