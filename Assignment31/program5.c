/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Accept one number from user and ON its first 4 bits  
//               return modified number
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0000000f;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("enter the number \n");
    scanf("%u",&iValue);

    iRet = OnBit(iValue);

    printf("updated number %u ",iRet);
    return 0;
}
