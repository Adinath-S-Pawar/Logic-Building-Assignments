/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Accept string and convert to lower case
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrX(char *str)
{
   while(*str != '\0')
   {
        if( (*str >= 'A') && (*str <= 'Z') ) 
        {
           *str = *str + 32; 
        }
        str++;
   } 
   
}

int main()
{
    char arr[20] = {'\0'};

    printf("enter String \n");
    scanf("%[^'\n]s",arr); 

    strlwrX(arr);
    printf("Modified string is %s \n ",arr);

    return 0;
}
