/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Accept file name and read all data
// Author : Adinath Santosh Pawar
// Date : 14/6/25
// 
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>  

void DisplayData(char name[])
{
    int fd = 0, bytes = 0;
    char Buffer[50] = {'\0'};

    fd = open(name,O_RDONLY);

    if(fd == -1)
    { 
        printf("unable to open file \n");
        return;
    }    

    bytes = read(fd,Buffer,50);
    printf("data from file is : %s \n",Buffer);
    close(fd);
   
}

int main()
{
    char fname[50];
    
    printf("enter the name to file  \n");
    scanf("%s",fname);

    DisplayData(fname);

    return 0;
}