/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : accept two number from user and display first number in second number of times
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo , int iFrequency)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt <= iFrequency;iCnt++)
   {
    printf("%d  ",iNo);
   }
    
}


int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    printf("enter number \n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}