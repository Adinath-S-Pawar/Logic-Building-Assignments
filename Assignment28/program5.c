/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Accept file name and accept string and write string 
//               to end of file
// Author : Adinath Santosh Pawar
// Date : 14/6/25
// 
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>  
#include<string.h>  

void Append(char name[], char data[])
{
    int fd = 0, bytes = 0;
    char Buffer[50] = {'\0'};

    fd = open(name,O_WRONLY |O_APPEND );

    if(fd == -1)
    { 
        printf("unable to open file \n");
        return;
    }    

    bytes = write(fd, data, strlen(data));

    if (bytes == -1)
    {
        printf("Write failed");
    }
        
    else
    {
        printf("Successfully appended %d bytes to the file.\n", bytes);    
    }
    close(fd);
}

int main()
{
    char fname[50];
    char content[50];
    
    printf("enter the name to file  \n");
    scanf("%s",fname);

    getchar(); //reads the next available character from the input buffer,
    // including whitespace characters 

    printf("enter the content \n");
    scanf("%[^\n]",content);

    Append(fname,content);

    return 0;
}