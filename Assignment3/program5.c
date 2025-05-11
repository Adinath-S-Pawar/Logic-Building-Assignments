/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : accept one character from user and check it is vowel or not
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cValue)
{
    bool bflag = false;
    if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
    }

    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
       bflag = true;
    }
    return bflag;
}

int main()
{
   char cValue = '\0';
   bool bRet = false;

    printf("enter character \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is vowel \n");
    }
    else
    {
        printf("It is not a vowel \n");
    }

    

    return 0;
}