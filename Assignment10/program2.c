/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : return count of odd digits
// Author : Adinath Santosh Pawar
// Date : 17/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if( (iDigit % 2) != 0)
        {
          iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    printf("Enter the value \n");
    scanf("%d",&iValue);

    int bRet = 0;
    bRet = CountOdd(iValue);

    printf("count of odd number is %d \n",bRet);

    return 0;
}