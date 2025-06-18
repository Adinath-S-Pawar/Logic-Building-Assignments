/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Accept string and accept one character, return frequency
//               of that character 
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str,char ch)
{
   int iCount = 0;
   while(*str != '\0')
   {
        if((*str) == ch ) 
        {
            iCount++;
        }
        str++;
   } 
   return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("enter String \n");
    scanf("%[^'\n]s",arr); 

    printf("enter character \n");
    scanf(" %c",&cValue); 

    iRet = CountChar(arr,cValue);
    printf("character frequency is %d \n",iRet);
    
    return 0;
}
