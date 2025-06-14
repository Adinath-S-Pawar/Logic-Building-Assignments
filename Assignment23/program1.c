/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Display ASCII table
// Author : Adinath Santosh Pawar
// Date : 6/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

void DisplayASCII()
{
    printf("Decimal\tHex\tOctal\tSymbol\n");
    for (int i = 0; i < 256; i++)
    {   
        printf("%d \t %x \t %o\t",i,i,i);
        // printable character
        if (isprint(i))
        {
            printf("%c\n", i);
        }
        else
        {
            printf("-\n");  //  '-' for non-printable characters
        }
    }
    
}

int main()
{
    DisplayASCII();

    return 0;
}
