/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Factorial using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>


int Fact(int iNo)
{
    if (iNo == 0 || iNo == 1)
    {
        return 1;
    }
        
    else
    {
        return(iNo * Fact(iNo-1));
    }
        
}

int main()
{
    int iRet = 0, iValue =0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d \n",iRet);

    return 0;
}