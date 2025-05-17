/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : accept one number from user and display difference between sum of factors and non factors
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n)
int DiffFact(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;
 
    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if( (iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
        else
        {
            iSumFact = iSumFact + iCnt;
        }
    }
    
    iDiff = iSumFact - iSumNonFact;
    
    return iDiff;
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d",&iValue);
   
    int iRet = 0;
    iRet = DiffFact(iValue);
    printf("difference of factors and non factors is %d \n",iRet);

    return  0;
}