/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Pattern printing using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    printf("%d ",iNo);
    Display(iNo - 1);  
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}