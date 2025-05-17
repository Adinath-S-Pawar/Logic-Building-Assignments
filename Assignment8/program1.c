/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : accept radius and calculate area of circle
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float iNo) 
{
    double dArea = 0.0;
    double PI = 3.14;

    dArea = PI * (double)iNo * (double)iNo;
    return dArea;
}

int main()
{
    float fValue = 0.0f;
    printf("Enter the value \n");
    scanf("%f",&fValue);

    double dRet = 0.0;
    dRet = CircleArea(fValue);
    printf("area of circle is %lf \n",dRet);
    
    return 0;
}