/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : accept one number from user and find odd factorial
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n)
int OddFactorial(int iNo) 
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo =  -(iNo);  
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        if(  (iCnt % 2) != 0 )
        {
            iAns = iAns * iCnt;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    printf("Enter the value \n");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = OddFactorial(iValue);
    printf("even factorial of number is %d ",iRet);
    
    return 0;
}