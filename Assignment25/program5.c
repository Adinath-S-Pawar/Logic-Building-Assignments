/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Accept string and count number of white spaces
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
   int iCount = 0;

   while(*str != '\0')
   {   
        if( (*str == ' ') ) 
        {
            iCount++;
        }
        str++;
   }

   return iCount;
   
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("enter String \n");
    scanf("%[^'\n]s",arr); 

    iRet = CountWhite(arr);
    printf("%d\n",iRet);
    

    return 0;
}
