/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Copy Capital character of string into another string
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    if(NULL == src)
    {
        return;
    }

    while ( (*src != '\0') )
    {
        if( (*src >= 'A') && (*src <= 'Z') )
        {
             *dest = *src;
              dest++;
        }
        src++;
    }
    
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyCap(arr,brr);

    printf("%s",brr);

    return 0;
}
