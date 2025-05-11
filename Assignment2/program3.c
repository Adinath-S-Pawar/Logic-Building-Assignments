/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : accept one number and print Hello if number is less than 10 else print Demo
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello \n");
    }
    else
    {
        printf("Demo \n");
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