/////////////////////////////////////////////////////////////////// 
//
// File name : program2.c
// Description : Search last occurence of element in linked list
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

int SearchLastOcc(PNODE head, int no)
{
    PNODE temp = head;
    int iPos = 0;
    int iRet = -1;
    while(temp != NULL)
    {
        iPos++;
        if(temp->data == no)
        {
            iRet = iPos;
        }
        temp = temp->next;
    }
    return iRet;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Insertfirst(&first, 101);
    Insertfirst(&first, 51);
    Insertfirst(&first, 21);
    Insertfirst(&first, 11);
    Insertfirst(&first, 11);

    iRet = SearchLastOcc(first,11);
    if(iRet == -1)
    {
        printf("element not found \n");
    }
    else
    {
        printf("position is %d \n",iRet);
    }

    iRet = SearchLastOcc(first,151);
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