/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : accept one number from user and print even factors
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i<=iNo;i++)
    {
        if( (i % 2) == 0 && ( (iNo % i) == 0 ))
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}