/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : accept one number from user and display if it is small,medium or large 
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(1)
void Number(int iNo)  
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo < 50)
    {
        printf("Small \n");
    }
    else if( (iNo >= 50) && (iNo <= 100) )
    {
        printf("medium \n");
    }
    else
    {
        printf("Large");
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}