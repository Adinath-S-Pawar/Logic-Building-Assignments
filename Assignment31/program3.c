/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Accept one number from user and toggle 7th bit and   
//               return modified number
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;
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

    iRet = ToggleBit(iValue);

    printf("updated number %u ",iRet);
    return 0;
}
