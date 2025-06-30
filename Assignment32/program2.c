/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Accept one number from user and accept position and 
//               off bit at that position and return number
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask; 
    iResult = iNo & iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    int iLocation = 0;

    printf("enter the number \n");
    scanf("%u",&iValue);

    printf("enter the location \n");
    scanf("%d",&iLocation);

    iRet =  OffBit(iValue,iLocation);

    printf("modified number is %u\n",iRet);

    return 0;
}
