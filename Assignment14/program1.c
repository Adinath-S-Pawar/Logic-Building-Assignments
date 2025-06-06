/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Pattern
// input : iRow = 4  iCol = 4
// Output : 
/*
    1   2   3   4
    5   6   7   8
    9   1   2   3
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
    int iCnt = 1;

    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1; j <= iCol; j++)
        {
            if(iCnt == 10)
            {
                iCnt = 1;
            }
           printf("%d\t",iCnt);
           iCnt++;
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