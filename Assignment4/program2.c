/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : accept one number from user and display factors in reverse order
// Author : Adinath Santosh Pawar
// Date : 17/05/2025
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
//Time Complexity - O(n/2)
void FactRev(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;
 
    for ( iCnt = iNo/2; iCnt > 0; iCnt--)
    {
        if( (iNo % iCnt) == 0)
        {
            printf("%d ",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number \n");
    scanf("%d",&iValue);
   
   FactRev(iValue);

    return  0;
}