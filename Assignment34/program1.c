/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : Search first occurence of element in linked list
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

int SearchFirstOcc(PNODE head, int no)
{
    PNODE temp = head;
    int iPos = 0;
    while(temp != NULL)
    {
        iPos++;
        if(temp->data == no)
        {
            return iPos;
        }
        temp = temp->next;
    }
    return -1;
}

int main()
{
    PNODE first = NULL;
    int iRet= 0;
    Insertfirst(&first, 101);
    Insertfirst(&first, 51);
    Insertfirst(&first, 21);
    Insertfirst(&first, 11);

    iRet = SearchFirstOcc(first,101);
    if(iRet == -1)
    {
        printf("element not found \n");
    }
    else
    {
        printf("position is %d \n",iRet);
    }

    iRet = SearchFirstOcc(first,151);
    if(iRet == -1)
    {
        printf("element not found \n");
    }
    else
    {
        printf("position is %d \n",iRet);
    }

    return 0;
}