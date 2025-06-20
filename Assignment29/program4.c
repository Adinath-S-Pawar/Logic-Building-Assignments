/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description :  Accept file name and accept one character count 
//                number of occurence of that character from the file
// Author : Adinath Santosh Pawar
// Date : 14/6/25
// 
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>  

int CountChar(char FName[],char ch)
{
    int fd = 0, iRet = 0,bytes = 0,iCnt = 0;
    char buffer[50];

    fd = open(FName,O_RDONLY );
    if(fd == -1)
    {
        printf("unable to open file ");
        return -1;
    }

    while (( bytes= read(fd, buffer, sizeof(buffer)) ) > 0)
    {
        for (iCnt = 0; iCnt < bytes; iCnt++)
        {
            if(buffer[iCnt] ==  ch)
            {
                iRet++;
            }
        }
    }
    close(fd);

    return iRet;
}

int main()
{
    char fname[50];
    char content[50];
    int iRet = 0;
    char cValue = '\0';
    
    printf("enter the name to file  \n");
    scanf("%s",fname);

    printf("enter the character  \n");
    scanf(" %c",&cValue);

    iRet = CountChar(fname,cValue);
    if(iRet > -1)
    {
        printf("%d \n",iRet);
    }
   
    return 0;
}