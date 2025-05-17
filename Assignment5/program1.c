/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : accept one number from user and print that number of $ *
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n)
void Pattern(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}