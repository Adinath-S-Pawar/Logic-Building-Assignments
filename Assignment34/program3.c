/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Return Addition  of elements in linked list
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

int Addition(PNODE head)
{
    PNODE temp = head;
    int iSum = 0;

    while(temp != NULL)
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }
    return iSum;
}

int main()
{
    PNODE first = NULL;
    int iRet= 0;

    Insertfirst(&first, 101);
    Insertfirst(&first, 51);
    Insertfirst(&first, 21);
    Insertfirst(&first, 11);

    iRet = Addition(first);
    printf("Addition is %d\n",iRet);

    return 0;
}