/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : accept one number from user and display its table
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include <stdio.h>
//Time Complexity - O(10)
void Table(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for ( iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ", (iCnt * iNo));
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}