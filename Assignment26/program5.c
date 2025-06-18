/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Accept string and reverse in place 
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrRevX(char *str)
{
   int iCount = 0;

    while (*str != '\0')
    {
        iCount++; 
        str++;
    }
    str--;
    for(int iCnt = iCount-1; iCnt >= 0; iCnt--)
    {
        printf("%c",*str);
        str--;
    }        
   
}

int main()
{
    char arr[20] = {'\0'};

    printf("enter String \n");
    scanf("%[^'\n]s",arr); 

    StrRevX(arr);
    
    return 0;
}
