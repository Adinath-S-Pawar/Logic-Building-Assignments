/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Check whether 7th,15th,21st and 28th bit is ON or OFF 
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkBit(unsigned int iNo)
{
    unsigned int iMask = 0x08104040;
    unsigned int iResult = 0;

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
    unsigned int iValue = 0;
    bool bRet = false;

    printf("enter the number \n");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("required bit is ON \n");
    }
    else
    {
        printf("required bit is OFF \n");

    }


    return 0;
}
