/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : concat second string after first string
//               Implement strcat() function
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    if(NULL == src || NULL == dest)
    {
        return;
    }

    while(*src != '\0')
    {
        src++;
    }
    while (*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }
    *src = '\0';
}

int main()
{
    char arr[30] = "Marvellous Infosystem ";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);

    return 0;
}
