/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Sum of digits using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int Sum(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    printf("Sum : %d \n",iRet);

    return 0;
}