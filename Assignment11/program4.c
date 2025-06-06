/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Pattern
// input : 5
// Output :# 1 * # 2 * # 3 * # 4 * # 5 * 
// Author : Adinath Santosh Pawar
// Date : 27/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("# %d * ",i);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the value \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}