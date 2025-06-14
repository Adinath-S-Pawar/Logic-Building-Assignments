/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : accept character and check whether it is special symbol or not
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
{
    bool bFlag = false;
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' ||ch == '*' )
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    printf("enter the character \n");
    char cValue = '\0';

    scanf("%c",&cValue);

    bool bRet = false;
    bRet = Display(cValue);

    if(bRet == true)
    {
        printf("character is special symbol \n");
    }
    else
    {
        printf("character is not a special symbol \n");
    }


    return 0;
}
