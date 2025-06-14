/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Accept character from user and check whether it is smallcase or not
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
   bool bRet = false;
   
   if(  ( (ch >= 'a') && (ch <= 'z') )  )
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("it is smallcase \n ");
    }
    else
    {
        printf("it is not a  smallcase \n "); 
    }

    return 0;
}
