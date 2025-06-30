/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Accept one number and range of positions from user.
//               Toggle all bits from that range
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;
UINT ToggleBitRange(UINT iNo, int iStart, int iLast)
{    
    UINT iResult = 0;

    //  mask with 1s in positions 1 to iLast 
    UINT iMask1 =( (1 << iLast) - 1 );
    // mask with 1s in positions 1 to (iStart - 1)
    UINT iMask2 = ( ( 1 << (iStart-1) ) -1);

    UINT iRangeMask = iMask1 ^ iMask2; //1s only in between range

    iResult = iNo ^ iRangeMask;

    return iResult;
    
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iLocation1 = 0, iLocation2 = 0;

    printf("enter the number \n");
    scanf("%u",&iValue);

    printf("enter the start location of range \n");
    scanf("%u",&iLocation1);

    printf("enter last location of range \n");
    scanf("%u",&iLocation2);

    iRet = ToggleBitRange(iValue,iLocation1,iLocation2);
    printf("%u \n",iRet);
    
    return 0;
}
