/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : accept height and weidth and calculate area of rectangle
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWdith, float fHeight) 
{
    double dArea = 0.0;
    

    dArea = (double)fWdith * (double)fHeight;
    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;

    printf("Enter the value of width \n");
    scanf("%f",&fValue1);
    printf("Enter the value of height \n");
    scanf("%f",&fValue2);

    double dRet = 0.0;
    dRet = RectArea(fValue1,fValue2);
    printf("area of rectangle is %f \n",dRet);
    
    return 0;
}