//  Data Structure ->

#include<stdio.h>
#include<stdlib.h>

// Structure Declaration
struct node
{
    int data;              // 4 bytes
    struct node *next;      // 8 bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    // step 1 : Allocate memory for node
  PNODE newn = NULL;
  newn = (PNODE)malloc(sizeof(NODE));

// step 2 :  Initialise the node

  newn->data=No;
  newn->next=NULL;

// step 3 : check whether LL is empty or not
  if(*Head==NULL)        // LL is empty
  {
    *Head=newn;
  }
else     // LL contains atleast 1 node in it
{
    newn->next=*Head;
    *Head=newn;
}
}
void Display(PNODE Head)
{
    printf("Element of Linked List are :\n");

    while (Head !=NULL)
    {
        printf("| %d |->", Head->data);
        Head= Head->next;
    }
    printf("NULL \n");
}

int main()
{
   PNODE First = NULL;
   
   InsertFirst(&First, 101);
   InsertFirst(&First, 51);
   InsertFirst(&First, 21);
   InsertFirst(&First, 11);

Display(First);

    return 0;
}