/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Accept string and count number of small character
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char* str)
{
    int iCnt = 0;

    //filter
    if(NULL == str)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("enter string \n");
    scanf("%[^'\n]s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}
