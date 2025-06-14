/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Accept character from user and check whether it is capital or not
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
   bool bRet = false;
   
   if(  ( (ch >= 'A') && (ch <= 'Z') )  )
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("it is capital \n ");
    }
    else
    {
        printf("it is not a capital character \n "); 
    }

    return 0;
}
