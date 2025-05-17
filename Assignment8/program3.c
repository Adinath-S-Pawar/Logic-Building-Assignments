/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : accept distance in KM and convert to metres
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo) 
{
   int iAns = 0.0f;
   iAns = iNo * 1000;
   return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value in KM \n");
    scanf("%d",&iValue);
  
    iRet = KMtoMeter(iValue);
    printf("Distance in meter is %d \n",iRet);
    
    return 0;
}