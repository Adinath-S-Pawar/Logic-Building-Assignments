/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Accept N numbers from user and return largest number
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] > iMax ))
        {   
           iMax = Arr[iCnt];
        }
    }
    return iMax;
    
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

    iRet = Maximum(ptr,iSize);
    printf("%d \n",iRet);
    
    free(ptr);

    return 0;
}
