/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : check if number contains 0
// Author : Adinath Santosh Pawar
// Date : 17/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }

    return false;

}

int main()
{
    int iValue = 0;
    printf("Enter the value \n");
    scanf("%d",&iValue);

    bool bRet = false;
    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains 0 \n");
    }
    else
    {
        printf("There is no zero \n");
    }

    return 0;
}