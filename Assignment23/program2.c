/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Accept a character from user , if it is a alphabet reverse its case
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if( ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if( ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    printf("%c \n",ch);
}

int main()
{
    printf("enter the character \n");
    char cValue = '\0';

    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}
