/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : print 5 to 1 on screen
// Author : Adinath Santosh Pawar
// Date : 11/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 1;
    while(i <= 5)
    {
        printf("%d \n",i);
        i++;
    }
}

int main()
{
    Display();

    return 0;
}