/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Pattern
// input : 5
// Output : 5 # 4 # 3 # 2 # 1 #  
// Author : Adinath Santosh Pawar
// Date : 27/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i > 0; i--)
    {
        printf("%d # ",i);
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