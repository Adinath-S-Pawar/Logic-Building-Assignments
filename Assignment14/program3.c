/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Pattern
// input : iRow = 4  iCol = 4
// Output : 
/*
    a   b   c   d   
    1   2   3   4   
    a   b   c   d   
    1   2   3   4
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
    char ch = 'a';

    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1,ch='a'; j <= iCol; j++,ch++)
        {
           if((i%2) == 0)
           {
                printf("%d\t",j);
           }
           else
           {
            printf("%c\t",ch);
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