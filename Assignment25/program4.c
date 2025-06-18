/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Accept string and display only digits
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
   while(*str != '\0')
   {
        if( (*str >= '0') && (*str <= '9') ) 
        {
           printf("%c",*str);
        }
        
        str++;
   } 
   
}

int main()
{
    char arr[20] = {'\0'};

    printf("enter String \n");
    scanf("%[^'\n]s",arr); 

    DisplayDigit(arr);
    

    return 0;
}
