/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Accept file name and create file in read mode 
// Author : Adinath Santosh Pawar
// Date : 14/6/25
// 
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>  

void CreateFile(char name[])
{
    int fd = 0;

    fd = creat(name,0777);

    if(fd == -1)
    { 
        printf("unable to create file \n");
        return;
    }    

    printf("file created successfully \n");
}

int main()
{
    char fname[50];
    
    printf("enter the name to file  \n");
    scanf("%s",fname);

    CreateFile(fname);

    return 0;
}