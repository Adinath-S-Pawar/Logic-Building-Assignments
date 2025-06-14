/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Accept character from user and check whether it is alphabet or not
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
   bool bRet = false;
   
   if( ( (ch >= 'a') && (ch <= 'z') ) || ( (ch >= 'A') && (ch <= 'Z') )   )
   {
        bRet = true;
   }

   return bRet;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("enter the character \n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("it is character \n ");
    }
    else
    {
        printf("it is not a character \n "); 
    }

    return 0;
}
