/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Pattern
// input : iRow = 5  iCol = 5
// Output : 
/*   
    1       2       3       4       5
    1       2                       5
    1               3               5
    1                       4       5
    1       2       3       4       5       
    
*/
// Author : Adinath Santosh Pawar
// Date : 30/5/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }
   
    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1;j <= iCol ; j++)
        {
            if(i==j || i == 1 || i == iRow || j == iCol || j==1)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
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