/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Pattern
// input : iRow = 4  iCol = 4
// Output : 
/*
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D
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
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1, ch = 'A'; j <= iCol; j++,ch++)
        {
            printf("%c \t",ch);
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