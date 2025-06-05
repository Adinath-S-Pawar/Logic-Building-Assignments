/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Difference between summation of even digit and odd digit
// Author : Adinath Santosh Pawar
// Date : 17/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if ( (iDigit % 2)  == 0)
        {
             iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
    
        iNo = iNo / 10;
    }
    iDiff = iEvenSum - iOddSum;
    return iDiff;
}

int main()
{
    int iValue = 0;
    printf("Enter the value \n");
    scanf("%d",&iValue);

    int bRet = 0;
    bRet = CountDiff(iValue);

    printf("%d \n",bRet);

    return 0;
}