/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Copy small character of string into another string
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    if(NULL == src)
    {
        return;
    }

    while ( (*src != '\0') )
    {
        if( ( (*src >= 'a') && (*src <= 'z') ) || *src == ' ' )
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

    StrCpySmall(arr,brr);

    printf("%s",brr);

    return 0;
}
