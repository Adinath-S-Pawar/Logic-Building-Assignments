/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : display addition of digits of each element
// Author : Adinath Santosh Pawar
// Date : 28/6/25
// 
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insertfirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->data = no;

    if (*head == NULL)
    {
        *head = newn;
    }

    else
    {
        newn -> next = *head;
        *head = newn;
    }
}

void SumDigit(PNODE head)
{
    PNODE temp = head;
    int iDigit = 0;
    int iLast = 0;

    while(temp != NULL)
    {
        int iSum = 0;
        iDigit = temp->data;
        while(iDigit != 0)
        {
            iLast = iDigit % 10;
            iSum = iSum + iLast;
            iDigit = iDigit / 10;  
        }
        printf("%d ",iSum);
        temp = temp->next;
    }
    printf("\n");

}

int main()
{
    PNODE first = NULL;

    Insertfirst(&first, 89);
    Insertfirst(&first, 6);
    Insertfirst(&first, 41);
    Insertfirst(&first, 17);
    Insertfirst(&first, 28);

    SumDigit(first);

    return 0;
}