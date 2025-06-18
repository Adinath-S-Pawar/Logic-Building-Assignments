/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Accept string and accept one character, return index
//               of last occurence of that character 
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str,char ch)
{
   int iCount = -1;
   bool bFlag = false;

    while (*str != '\0')
    {
        iCount++; 
        str++;
    }
    str--;
    for(int iCnt = iCount; iCnt > 0; iCnt--)
    {
        if((*str) == ch ) 
        {
            bFlag = true;
            iCount = iCnt;
            break;
        }
        str--;
    }        
   
   if(bFlag == true)
   {
        return iCount;
   }
   else
   {
        return -1;
   }
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("enter String \n");
    scanf("%[^'\n]s",arr); 

    printf("enter character \n");
    scanf(" %c",&cValue); 

    iRet = LastChar(arr,cValue);
    printf("character location is %d \n",iRet);
    
    return 0;
}
