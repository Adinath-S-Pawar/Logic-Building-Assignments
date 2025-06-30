/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Accept two numbers from user and display position of  
//               common ON bits
// Author : Adinath Santosh Pawar
// Date : 18/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iNo = iNo1 & iNo2;

    int position = 1;

    printf("Common ON bit positions: ");
    while (iNo)
    {
        if (iNo & 1)
        {
            printf("%d ", position);
        }
            
        iNo = iNo >> 1;
        position++;
    }
    printf("\n");
  
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    printf("enter the number \n");
    scanf("%u",&iValue1);

    printf("enter second number \n");
    scanf("%u",&iValue2);

    CommonBits(iValue1,iValue2);
    
    return 0;
}
