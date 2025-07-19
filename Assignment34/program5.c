/////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : Return smallest elements in linked list
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

int Minimum(PNODE head)
{
    PNODE temp = head;
    int iMin = temp->data;

    while(temp != NULL)
    {
        if(temp->data < iMin)
        {
            iMin = temp->data;
        }
        temp = temp->next;
    }
    return iMin;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Insertfirst(&first, 101);
    Insertfirst(&first, 51);
    Insertfirst(&first, 21);
    Insertfirst(&first, 11);

    iRet = Minimum(first);
    printf("Minimum is %d \n",iRet);

    return 0;
}