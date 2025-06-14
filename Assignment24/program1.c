/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Accept string and count number of capital character
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char* str)
{
    int iCnt = 0;

    //filter
    if(NULL == str)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}
