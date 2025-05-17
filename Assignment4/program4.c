/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : accept one number from user and display sum of non factors 
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n)
int SumNonFact(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iSum = 0;
 
    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if( (iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d",&iValue);
   
    int iRet = 0;
    iRet = SumNonFact(iValue);
    printf("Sum of non factors is %d \n",iRet);

    return  0;
}