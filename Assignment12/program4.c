/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Pattern
// input : iRow = 3  iCol = 4
// Output : 
/*
    *   #   *   #
    *   #   *   #
    *   #   *   #
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

    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1; j <= iCol; j++)
        {
            if( (j % 2) == 0)
            {
                printf("# \t");
            }
            else
            {
                 printf("* \t");
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