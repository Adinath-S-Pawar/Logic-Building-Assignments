/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : accept one number from user and display patter
//eg - input=2;  **##
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include <stdio.h>
//Time Complexity - O(2n)
void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for ( iCnt = 1; iCnt <= (2 * iNo); iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("* ");
        }
        else
        {
            printf("# ");
        }
        
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}