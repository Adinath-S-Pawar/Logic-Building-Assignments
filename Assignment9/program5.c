/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : count frequency of number less than 6
// Author : Adinath Santosh Pawar
// Date : 17/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
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
        if(iDigit < 6)
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
    bRet = Count(iValue);

    printf("frequency of number less than 6 is %d \n",bRet);

    return 0;
}
