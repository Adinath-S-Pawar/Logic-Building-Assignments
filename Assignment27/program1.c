/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Copy content of string into another string
//               Implement strcpy() function
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    if(NULL == src)
    {
        return;
    }

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}
