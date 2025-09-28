/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Pattern printing using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';
    if(iNo <= 0)
    {
        return;
    }

    Display(iNo - 1);  
    printf("%c ",ch);
    ch++;
}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}