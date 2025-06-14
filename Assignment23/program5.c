/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Accept character and display its decimal octal and hex value
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal\tHex\tOctal\n");
    printf("%d \t 0X%x \t 0%o\t",ch,ch,ch);
}

int main()
{
    printf("enter the character \n");
    char cValue = '\0';

    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}
