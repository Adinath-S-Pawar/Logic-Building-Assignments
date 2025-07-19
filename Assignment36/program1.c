/////////////////////////////////////////////////////////////////// 
//
// File name : program1.c
// Description : reverse each element of linkedlist
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

void Reverse(PNODE head)
{
    PNODE temp = head;
    
    while(temp != NULL)
    {
        int iDigit = 0;  
        int iRev = 0; 
        int iNo = temp->data;  
   
        while(iNo != 0) 
        {
            iDigit = iNo%10;
            iRev = ( iRev * 10 ) + iDigit;
            iNo = iNo/10;       
        }
        temp->data = iRev;
        temp = temp->next;
    }
  
}

void Display(PNODE head)
{
    PNODE temp = head;
    while( temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL \n");
}

int main()
{
    PNODE first = NULL;

    Insertfirst(&first, 89);
    Insertfirst(&first, 6);
    Insertfirst(&first, 41);
    Insertfirst(&first, 17);
    Insertfirst(&first, 28);

    Display(first);

    Reverse(first);
    Display(first);

    return 0;
}