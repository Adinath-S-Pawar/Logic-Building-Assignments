/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Pattern
// input : 5
// Output : A B C D E  
// Author : Adinath Santosh Pawar
// Date : 27/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';
    for(i = 1; i<= iNo; i++,ch++)
    {
        printf("%c ",ch);
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