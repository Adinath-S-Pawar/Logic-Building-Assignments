/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : accept one number from user and display odd numbers till that number
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n)
void OddDisplay(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if( (iCnt % 2) != 0)
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

    OddDisplay(iValue);

    return 0;
}