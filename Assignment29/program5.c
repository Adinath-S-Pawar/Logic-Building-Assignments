/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description :  Accept file name and accept one count and read  
//                that number of character from the file
// Author : Adinath Santosh Pawar
// Date : 14/6/25
// 
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>  

void DisplayN(char FName[],int iSize)
{
    int fd = 0, iRet = 0,bytes = 0,iCnt = 0;
    char buffer[50];

    fd = open(FName,O_RDONLY );
    if(fd == -1)
    {
        printf("unable to open file ");
        return ;
    }

    if (iSize > sizeof(buffer))
    {
        iSize = sizeof(buffer);
    }

    bytes= read(fd, buffer, iSize);
   for (iCnt = 0; iCnt < bytes; iCnt++)
   {
        printf("%c",buffer[iCnt]);
   }
   
    close(fd);

}

int main()
{
    char fname[50];
    char content[50];
    int  iValue = 0;
    
    printf("enter the name to file  \n");
    scanf("%s",fname);

    printf("enter the count  \n");
    scanf(" %d",&iValue);

    DisplayN(fname,iValue);
   
    return 0;
}