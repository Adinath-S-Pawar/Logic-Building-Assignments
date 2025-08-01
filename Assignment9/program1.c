/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : display digits in reverse order
// Author : Adinath Santosh Pawar
// Date : 17/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n",iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;
    printf("Enter the value \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}