/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : accept one number from user and print that many even numbers
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return ;
    }
    int iCnt = 0;
    int iAns = 2;
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iAns);
        iAns = iAns + 2;
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}