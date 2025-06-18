/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Accept string and convert to upper case
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprX(char *str)
{
   while(*str != '\0')
   {
        if( (*str >= 'a') && (*str <= 'z') ) 
        {
           *str = *str - 32; 
        }
        str++;
   } 
   
}

int main()
{
    char arr[20] = {'\0'};

    printf("enter String \n");
    scanf("%[^'\n]s",arr); 

    struprX(arr);
    printf("Modified string is %s \n ",arr);

    return 0;
}
