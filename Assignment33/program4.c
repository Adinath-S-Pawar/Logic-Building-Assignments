/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Accept one number and 2 positions from user and check
//            whether bit at first or bit at second position is ON or OFF 
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0x00000001;
    UINT result = 0;

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);

    result = (iNo & (iMask1 | iMask2));

    if(result == 0)
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
    UINT iValue = 0;
    int iLocation1 = 0, iLocation2 = 0;
    bool bRet = false;

    printf("enter the number \n");
    scanf("%u",&iValue);

    printf("enter the location \n");
    scanf("%u",&iLocation1);

    printf("enter second location \n");
    scanf("%u",&iLocation2);

    bRet = ChkBit(iValue,iLocation1,iLocation2);

    if(bRet == true)
    {
        printf("bit at either of given positions is ON \n ");
    }
    else
    {
        printf("bits at given position are OFF \n");
    }
    
    return 0;
}
