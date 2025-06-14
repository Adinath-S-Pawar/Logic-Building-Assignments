/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Accept string and display in reverse order
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char* str)
{
    int iLength = 0;
    if(NULL == str)
    {
        return;
    }

    while (*str != '\0')
    { 
        str++;
        iLength++;
    }

    str--;

    for (int i = iLength; i > 0; i--)
    {
        printf("%c",*str);
        str--;
    }
    

}

int main()
{
    char arr[20];

    printf("enter string \n");
    scanf("%[^'\n]s",arr);

    Reverse(arr);
   
    return 0;
}
