/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : accept one number and print that number of *
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = iNo;
    while (iCnt  > 0)
    {
        printf("*");
        iCnt--;
    }
    
}


int main()
{
    int iValue = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}