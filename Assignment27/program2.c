/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Copy content of string into another string
//               Implement strncpy() function
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    if(NULL == src)
    {
        return;
    }

    while ( (*src != '\0') && (iCnt != 0) )
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrNCpyX(arr,brr,10);

    printf("%s",brr);

    return 0;
}
