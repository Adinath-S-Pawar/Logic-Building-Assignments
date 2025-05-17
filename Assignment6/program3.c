/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : accept one number from user and display factorial
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include <stdio.h>
//Time Complexity - O(n)
int Factorial(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iFact = 1;

    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    
    return iFact;

}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d", &iValue);

    int iRet = 0;
    iRet = Factorial(iValue);
    printf("The factorial is %d \n",iRet);

    return 0;
}