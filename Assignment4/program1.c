/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : accept one number from user and display multiplication of factors
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n/2)
int FactorMultiplication(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMul = 1;
    for ( iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if( (iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d",&iValue);
    int iRet = 0;

    iRet = FactorMultiplication(iValue);
    printf("Multiplication of factors is %d \n",iRet);

    return  0;
}