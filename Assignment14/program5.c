/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Pattern
// input : iRow = 4  iCol = 4
// Output : 
/*
    1   2   3   4
    2   3   4   5
    3   4   5   6
    4   5   6   7  
*/
// Author : Adinath Santosh Pawar
// Date : 27/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int j = 0;
    int i = 0;

    for(i = 0; i < iRow; i++)
    {    
        for(j = 1; j <= iCol; j++)
        {
           printf("%d\t",i+j);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter number of rows \n");
    scanf("%d",&iValue1);

    printf("enter number of columns \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}