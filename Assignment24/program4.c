/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Accept string and check whether it contains vowels
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool chkVowel(char* str)
{
    bool bFlag = false;
    //filter
    if(NULL == str)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if(*str == 'a' ||*str == 'e' ||*str == 'i' ||*str == 'o' ||*str == 'u' ||
        *str == 'A' ||*str == 'E' ||*str == 'I' ||*str == 'O' ||*str == 'U' )
        {
             bFlag = true;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("enter string \n");
    scanf("%[^'\n]s",arr);

    bRet = chkVowel(arr);

    if(bRet == true)
    {
        printf("String contains Vowel \n");
    }
    else
    {
          printf("String does not contains Vowel \n");
    }

   
    return 0;
}
