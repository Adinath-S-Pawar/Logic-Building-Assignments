/////////////////////////////////////////////////////////////////// 
//
// File name : program4.c
// Description : Return second maximum element
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

int SecondLargest(PNODE head)
{
    PNODE temp = head;
    int firstlargest = temp->data;
    int secondlargest = 0;

    while(temp != NULL)
    {
        if(temp->data > firstlargest)
        {
            firstlargest = temp->data;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL)
    {
        if(temp->data > secondlargest && temp->data < firstlargest)
        {
            secondlargest = temp->data;
        }
        temp = temp->next;
    }
    return secondlargest;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Insertfirst(&first, 89);
    Insertfirst(&first, 6);
    Insertfirst(&first, 41);
    Insertfirst(&first, 17);
    Insertfirst(&first, 28);

    iRet = SecondLargest(first);
    printf("Second Largest elements is %d",iRet);

    return 0;
}