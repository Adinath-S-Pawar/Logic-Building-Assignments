/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Accept N numbers from user and return difference between largest and smallest number
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0, iMax = 0, iDiff = 0;
    iMin = Arr[iCnt];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] < iMin ))
        {   
           iMin = Arr[iCnt];
        }

        if( (Arr[iCnt] > iMax ))
        {   
           iMax = Arr[iCnt];
        }
    }
    iDiff = iMax - iMin;
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

    iRet = Difference(ptr,iSize);
    printf("%d \n",iRet);
    
    free(ptr);

    return 0;
}
