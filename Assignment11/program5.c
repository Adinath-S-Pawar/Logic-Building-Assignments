/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Pattern
// input : 5
// Output : 2 4 6 8 10
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
        printf("%d ",i*2);
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