/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : accept one number and print that number of *
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}


int main()
{
    int iValue = 0;
    iValue = 5;

    printf("enter number \n");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}