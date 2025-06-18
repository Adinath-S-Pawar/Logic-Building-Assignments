/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Accept string and toggle the case
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtoggleX(char *str)
{
   while(*str != '\0')
   {
        if( (*str >= 'a') && (*str <= 'z') ) 
        {
           *str = *str - 32; 
        }
        else if( (*str >= 'A') && (*str <= 'Z') ) 
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

    strtoggleX(arr);
    printf("Modified string is %s \n ",arr);

    return 0;
}
