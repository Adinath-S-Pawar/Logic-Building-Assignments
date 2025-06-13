/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description :Display elements divisible by 5 and are even
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Arr[iCnt] % 10) == 0)
        {
            printf("%d ",Arr[iCnt]); 
        }
      
    }
    printf("\n");

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

    Display(ptr,iSize);

    free(ptr);

    return 0;
}