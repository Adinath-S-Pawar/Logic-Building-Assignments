/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : accept two number from user and check whether it is even or odd
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo )
{
    bool bRet = false;
    if(iNo % 2 == 0)
    {
        bRet = true;
    }
    return bRet;
    
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter number \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Even number \n");
    }
    else
    {
        printf("Odd number \n");
    }

    return 0;
}