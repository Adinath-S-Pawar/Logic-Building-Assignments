/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Accept one number from user and off 7th and 10th bit,  
//               return modified number
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0xfffffdbf;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("enter the number \n");
    scanf("%u",&iValue);


    iRet = OffBit(iValue);

    printf("updated number %u ",iRet);
    return 0;
}
