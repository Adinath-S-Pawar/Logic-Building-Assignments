/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : accept one character from user and convert case of character
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')  // Uppercase
    {
        char converted = cValue + 32;   // Convert to lowercase
        printf("%c", converted);        
    }
    else if(cValue >= 'a' && cValue <= 'z')  // Lowercase
    {
        char converted = cValue - 32;   // Convert to uppercase
        printf("%c", converted);        
    }
}

int main()
{
   char cValue = '\0';

    printf("enter character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}