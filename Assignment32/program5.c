/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Accept one number from user and toggle content of    
//                first and last nibble(group of 4bits) of number
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xf000000f;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("enter the number \n");
    scanf("%u",&iValue);

    iRet =  ToggleBit(iValue);

    printf("modified number is %u\n",iRet);

    return 0;
}
