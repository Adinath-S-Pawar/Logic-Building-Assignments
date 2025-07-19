/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Display perfect numbers in linked list
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

void DisplayPerfect(PNODE head)
{
    PNODE temp = head;

    while(temp != NULL)
    {
        int sum = 0;
        for(int i = 1;i <= (temp->data/2);i++)
        {
            if(temp->data % i == 0)
            {
                sum = sum + i;
            }
            if(sum == temp->data)
            {
                printf("%d ",temp->data);
            }
        }
        temp = temp->next;
    }

}

int main()
{
    PNODE first = NULL;

    Insertfirst(&first, 89);
    Insertfirst(&first, 6);
    Insertfirst(&first, 41);
    Insertfirst(&first, 17);
    Insertfirst(&first, 28);

    DisplayPerfect(first);

    return 0;
}