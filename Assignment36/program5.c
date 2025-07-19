//////////////////////////////////////////////////////////////////// 
//
// File name : program5.c
// Description : display largest digit of each element of linkedlist
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

void DisplayProduct(PNODE head)
{ 
    PNODE temp = head;
    
    while(temp != NULL)
    {
        int iDigit = 0;  
        int iLargest = 0;
        int iNo = temp->data;  
   
        while(iNo != 0) 
        {
            iDigit = iNo%10;
            if(iLargest < iDigit)
            {
                iLargest = iDigit;
            }
            iNo = iNo/10;       
        }
       printf("%d ",iLargest);
        temp = temp->next;
    }
}

int main()
{
    PNODE first = NULL;

    Insertfirst(&first, 11);
    Insertfirst(&first, 28);
    Insertfirst(&first, 17);
    Insertfirst(&first, 40);
    Insertfirst(&first, 6);
    Insertfirst(&first, 89);

    DisplayProduct(first);

    return 0;
}