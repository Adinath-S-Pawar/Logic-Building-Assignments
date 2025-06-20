/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Accept file name and open file in read mode 
// Author : Adinath Santosh Pawar
// Date : 14/6/25
// 
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>  

void OpenFile(char name[])
{
    int fd = 0;

    fd = open(name,O_RDONLY);

    if(fd == -1)
    { 
        printf("unable to open file \n");
        return;
    }    

    printf("file opened successfully \n");
    close(fd);
}

int main()
{
    char fname[50];
    
    printf("enter the name to file  \n");
    scanf("%s",fname);

    OpenFile(fname);

    return 0;
}