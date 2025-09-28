/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : count number of characters in string using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

// int Strlen(char *str)
// {
//     static int iCount = 0;
//     if(*str != '\0')
//     {
//         iCount++;
//         str++;
//         Strlen(str);
//     }
//     return iCount;
// }

int StrLen(const char *str)
{
    if (*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + StrLen(str + 1);
    }       
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string \n");
    scanf("%s",arr); //only reads a word

    //iRet = Strlen(arr);
    iRet = StrLen(arr);

    printf("%d \n",iRet);

    return 0;
}