/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Accept one number from user and check whether 9th 
//               or 12th bit is on or off
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x00000900;  
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("enter the number \n");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("9th or 12th bit is ON \n ");
    }
    else
    {
        printf("9th and 12th bits are OFF \n");
    }
    
    return 0;
}
