/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : accept one number from user and print number till that number
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n)
void Display(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt);
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}