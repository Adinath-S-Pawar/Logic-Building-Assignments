/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Accept N numbers from user and display summation of digit of each number
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0, iLast = 0;
    int iSum = 0;
 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iDigit = Arr[iCnt];
        iSum = 0;

        while(iDigit != 0)
        {
            iLast = iDigit % 10;
            iSum = iSum + iLast;
            iDigit = iDigit/10;
        }
        printf("%d ",iSum);
        
    }

}

int main()
{
    int iSize = 0, iCnt = 0;
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

    DigitsSum(ptr,iSize);
    
    free(ptr);

    return 0;
}
