/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : convert area to square meter 
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue) 
{
   double dSqm = 0;
   dSqm = iValue * 0.0929;
   return dSqm;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter the area in square feet \n");
    scanf("%i",&iValue);
  
    dRet = SquareMeter(iValue);
    printf(" Area in square meter is %f \n",dRet);
    
    return 0;
}