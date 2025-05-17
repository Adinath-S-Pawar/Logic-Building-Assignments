/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : accept one number from user and display non factors 
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n)
void NonFact(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;
 
    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if( (iNo % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d",&iValue);
   
    NonFact(iValue);

    return  0;
}