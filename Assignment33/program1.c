/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Accept one number from user and count number of ON 
//               bits in it without using % or / operator
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;
// Brian Kerninghans Algorithm
int CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo)
    {
        iNo = iNo & (iNo-1);
        iCount++;
    }
    return iCount;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("enter the number \n");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);
    printf("Number of ON bit are %d \n",iRet);
    return 0;
}
