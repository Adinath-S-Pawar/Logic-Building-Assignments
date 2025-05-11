/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : accept one number and check whether number is divisible by 5 or not
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if( (iNo % 5) == 0 )
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
    int iValue = 0;
    bool bRet = false;

    printf("enter number \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("divisible by 5 \n");
    }
    else
    {
        printf("not divisible by 5 \n");
    }

    return 0;
}