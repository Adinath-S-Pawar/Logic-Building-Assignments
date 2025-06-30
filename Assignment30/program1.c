/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Check whether 15th bit is ON or OFF 
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkBit(unsigned int iNo)
{
    unsigned int iMask = 0;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter the number \n");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("15th bit is ON \n");
    }
    else
    {
        printf("15th bit is OFF \n");

    }


    return 0;
}
