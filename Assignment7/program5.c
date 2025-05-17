/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : accept one number from user and find difference between even and odd factorial
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n)
int Difference(int iNo) 
{
    int iCnt = 0;
    int iAns = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo =  -(iNo);  
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        if(  (iCnt % 2) == 0 )
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    iAns = iEvenFact - iOddFact;
    return iAns;
}

int main()
{
    int iValue = 0;
    printf("Enter the value \n");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = Difference(iValue);
    printf("difference between even factorial and odd factorial  of number is %d ",iRet);
    
    return 0;
}