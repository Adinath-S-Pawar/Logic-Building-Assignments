/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Accept N numbers from user and display all such numbers which contain 3 digits in it
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d ",Arr[iCnt]);
        }
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

    Digits(ptr,iSize);
    
    free(ptr);

    return 0;
}
