/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Pattern
// input : iRow = 4  iCol = 4
// Output : 
/*
    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d
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
    char ch1 = 'A';
    char ch2 = 'a';

    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1, ch1 = 'A',ch2 = 'a'; j <= iCol; j++)
        {
            if( (i % 2) == 0)
            {
                printf("%c \t",ch2);
                ch2++;
            }
            else
            {
                 printf("%c \t",ch1);
                 ch1++;
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