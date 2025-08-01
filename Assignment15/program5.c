/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Pattern
// input : iRow = 4  iCol = 4
// Output : 
/*
    1   2   3   4
    1   *   *   4
    1   *   *   4
    1   2   3   4
    
*/
// Author : Adinath Santosh Pawar
// Date : 30/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i,j = 0;

        for(i = 1; i<= iRow; i++)
        {   
            for(j = 1; j <= iCol; j++) 
            {
                if( (j == 1) || ( j == iCol) ||  (i == 1) || (i == iRow))
                {
                    printf( "%d\t",j);  
                }
                else
                {
                    printf("*\t");
                }
                
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