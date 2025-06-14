/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Accept character from user and check whether it is digit or not
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
   bool bRet = false;
   
   if(  ( (ch >= '0') && (ch <= '9') )  )
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

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("it is Digit \n ");
    }
    else
    {
        printf("it is not a  Digit \n "); 
    }

    return 0;
}
