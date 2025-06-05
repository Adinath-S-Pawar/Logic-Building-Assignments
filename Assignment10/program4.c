/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Multiplication of digits
// Author : Adinath Santosh Pawar
// Date : 17/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
             iMul = iMul * iDigit;
        }
    
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    printf("Enter the value \n");
    scanf("%d",&iValue);

    int bRet = 0;
    bRet = MultiDigits(iValue);

    printf("%d \n",bRet);

    return 0;
}