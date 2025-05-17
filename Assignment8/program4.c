/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : accept temperature in fahrenheit and convert to celcius
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

float FhtoCs(float fTemp) 
{
   float fCelcius = 0.0f;

   fCelcius = ( (fTemp - 32) * (5.0/9.0) ); // div by 9.0 not by int
 
   return fCelcius;
}

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter the temperature in fahrenheit \n");
    scanf("%f",&fValue);
  
    fRet = FhtoCs(fValue);
    printf("Temperature in celcius is %f \n",fRet);
    
    return 0;
}