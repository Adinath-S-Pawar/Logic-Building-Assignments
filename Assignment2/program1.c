/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : accept one number and print that number of *
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("*");
        iCnt++;
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