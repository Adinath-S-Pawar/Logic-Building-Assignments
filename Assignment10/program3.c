/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : return count of digits between 3 and 7
// Author : Adinath Santosh Pawar
// Date : 17/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
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
        if( (iDigit < 7) && (iDigit > 3) )
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
    bRet = CountRange(iValue);

    printf(" %d \n",bRet);

    return 0;
}