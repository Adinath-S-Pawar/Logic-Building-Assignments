/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : accept one number from user and display first 5 multiples
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(5)
void MultipleDisplay(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for ( iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ", (iNo * iCnt));
      
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}