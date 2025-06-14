/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Accept string and return difference in frequency of capital and small character
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char* str)
{
    int iCntSmall = 0;
    int iCntCap = 0;
    int iDiff = 0;

    //filter
    if(NULL == str)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        if(*str >= 'A' && *str <= 'Z')
        {
            iCntCap++;
        }
        str++;
    }
    iDiff = iCntSmall - iCntCap;
    return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("enter string \n");
    scanf("%[^'\n]s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}
