/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Accept character from user , if it is capital display all alphabet from character to Z
//               if it is small print in reverse order till a , in other cases return directly
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if( ch >= 'a' && ch <= 'z')
    {
        int i = 0;
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c ",ch);
            ch--;
        }
    }
    else if( ch >= 'A' && ch <= 'Z')
    {
        int i = 0;
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c ",ch);
            ch++;
        }
    }
    else
    {
        printf("%c \n",ch);
    }
    
}

int main()
{
    printf("enter the character \n");
    char cValue = '\0';

    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}
