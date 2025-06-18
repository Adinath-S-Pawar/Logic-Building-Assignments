/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Accept string and accept one character , check 
//               whether that character is present in string or not
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{
   bool bFlag = false;
   while(*str != '\0')
   {
        if((*str) == ch ) 
        {
            bFlag = true;
            break;
        }
        str++;
   } 
   return bFlag;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("enter String \n");
    scanf("%[^'\n]s",arr); 

    printf("enter character \n");
    scanf(" %c",&cValue); 

    bRet = ChkChar(arr,cValue);

    if(bRet == true)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }
    return 0;
}
