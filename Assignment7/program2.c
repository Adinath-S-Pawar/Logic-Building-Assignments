/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : convert price in dollar to INR
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include <stdio.h>
//Time Complexity - O(1)
int DollarToINR(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iAns = 0;
    iAns = (iNo * 70);

    return iAns;
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d", &iValue);

    int iRet = 0;
    iRet = DollarToINR(iValue);
    printf("Value in INR is %d \n",iRet);

    return 0;
}