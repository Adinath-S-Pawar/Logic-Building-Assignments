/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Product of digits using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>


int Mult(int iNo)
{
    static int Product = 1;
    if(iNo != 0)
    {
        Product = Product * (iNo % 10);
        iNo = iNo / 10;
        Mult(iNo);
    }
    return Product;
}

int Multiplication(int iNo)
{
    if (iNo == 0)
    {
        return 1; 
    }   

    return (iNo % 10) * Multiplication(iNo / 10);
}

int main()
{
    int iRet = 0, iValue =0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Multiplication(iValue);

    printf("%d \n",iRet);

    return 0;
}