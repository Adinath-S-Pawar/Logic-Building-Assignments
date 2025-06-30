/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Accept one number from user and accept position and 
//              check whether bit at that position is ON or OFF
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    if(iResult == iMask)
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
    bool bRet = 0;
    int iLocation = 0;

    printf("enter the number \n");
    scanf("%u",&iValue);

    printf("enter the location \n");
    scanf("%d",&iLocation);

    bRet =  ChkBit(iValue,iLocation);

    if(bRet == true)
    {
        printf("Bit is ON at given Position \n");
    }
    else
    {
        printf("Bit is OFF at given Position \n");
    }

    return 0;
}
