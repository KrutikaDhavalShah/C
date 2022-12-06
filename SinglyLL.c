#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
  int data;
  struct node *next;    
};//12

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;   

void InsertFirst(PPNODE First, int No)   //no time complexity
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));     //12 Allocate dynamic memory

  newn->data  = No;
  newn ->next = NULL;
//if madhe ekdach janar
  if(*First == NULL)   //if LL is empty
  {
    *First = newn;
  }
  //baki velela else madhe janar
  else                 //if LL contains atleast one node
  {
    newn -> next = *First;
    *First = newn;
  }
}

void InsertLast(PPNODE First, int No)      //time complexity:N
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));     //12 Allocate memory
  PNODE temp = *First;

  newn-> data  = No;
  newn -> next = NULL;

  if(*First == NULL)   //if LL is empty
  {
    *First = newn;   //it copies address of newnode in head pointer through first pointer
  }
  else                 //if LL contains atleast one node
  {
   while(temp->next != NULL)   //it will traverse till 400
   {
    temp = temp -> next;
   }
   temp -> next = newn;
  }
}

void Display(PNODE First)             //time complexity:N
{
   printf("Elements from Linked List are: \n");

    while(First != NULL)
    {
      printf("| %d |-> ",First->data);
      First = First -> next;
    }
    printf("NULL \n");
}

int Count(PNODE First)                  //time complexity:N
{
   int iCnt = 0;

    while(First != NULL)
    {
      iCnt++;
      First = First -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
  PNODE temp = * First;

  if(*First == NULL)   //Empty LL
  {
    return;
  }
  else if((*First)->next == NULL) //1 node in LL
  {
    free(*First);
    *First = NULL;   //NULL head madhe takla;nahi kela NULL tar Dangling pointer hoil
  }
  else   //More than 1 node
  {
     (*First) = (*First) -> next;   //Head ->100 jaun 200 ala
     free(temp);
  }
}

void DeleteLast(PPNODE First)
{
  PNODE temp = *First;
  if(*First == NULL)   //Empty LL
  {
    return;
  }
  else if((*First)->next == NULL) //1 node in LL
  {
    free(*First);
    *First = NULL;   //NULL head madhe takla
  }
  else   //More than 1 node
  {
     while(temp -> next ->next != NULL)
     {
      temp = temp -> next;
     }
     free(temp ->next);
     temp -> next = NULL;
  }
}

void InsertAtPos(PPNODE First, int no, int ipos)
{
  int NodeCnt = 0;
  PNODE newn = NULL;
  PNODE temp = NULL;
  int iCnt = 0;

  NodeCnt = Count(*First);

  if((ipos < 1) || (ipos > (NodeCnt + 1)))    //filter
  {
    printf("Invalid position \n");
    return;
  }

  if(ipos == 1)
  {
    InsertFirst(First,no);   //InsertFirst(60,105)
  }
  else if(ipos == NodeCnt + 1)
  {
    InsertLast(First,no);    //InsertLast(60,105)
  }
  else
  {
    //adhi joda mag toda
    //temp -> next = newn -> next;save the address of next node in new node
    
   
    newn = (PNODE)malloc(sizeof(NODE));//allocate memory 

    newn -> data = no;                 //initialize memory 
    newn -> next = NULL;

    temp = *First;     //100

    for(iCnt = 1;iCnt < ipos - 1; iCnt++)
    {
      temp = temp -> next;
    }
    newn -> next = temp ->next;
    temp ->next = newn;
  }
}

void DeleteAtPos(PPNODE First, int ipos)
{
  PNODE temp1 = NULL;
  PNODE temp2 = NULL;

  int iCnt = 0, NodeCnt = 0;

  NodeCnt = Count(*First);

  if((ipos < 1) || (ipos > NodeCnt))
  {
    printf("Invalid position\n");
    return;
  }

  if (ipos == 1)
  {
    DeleteFirst(First);
  }
  else if (ipos < NodeCnt)
  {
    DeleteLast(First);
  }
  else
  {
    temp1 = *First;

    for(iCnt = 1; iCnt < ipos - 1; iCnt++)
    {
      temp1 = temp1 ->next;
    }
    temp2 = temp1 -> next;    //temp1 -> next ->next; store address of node to 
                              // be deleted
    free(temp2);   //this is important to avoid memory leak
    
  }
}
int main()
{
  PNODE Head = NULL;

  int iRet =0;

  InsertFirst(&Head,51);   //InsertFirst(60,51)
  InsertFirst(&Head,21);   //InsertFirst(60,21)
  InsertFirst(&Head,11);   //InsertFirst(60,11)

  Display(Head);

  iRet = Count(Head);

  printf("Number of nodes are : %d\n",iRet);

  InsertLast(&Head,101);    //InsertFirst(60,101)
  InsertLast(&Head,111);   //InsertFirst(60,111)
  InsertLast(&Head,121);   //InsertFirst(60,121)

  Display(Head);

  iRet = Count(Head);
  printf("Number of nodes are : %d\n",iRet);

  InsertAtPos(&Head, 105,5);
  Display(Head);

  iRet = Count(Head);
  printf("Number of nodes are : %d\n",iRet);

  DeleteAtPos(&Head,5);

  Display(Head);

  iRet = Count(Head);
  printf("Number of nodes are : %d\n",iRet);

  DeleteFirst(&Head);
  Display(Head);

  iRet = Count(Head);
  printf("Number of nodes are : %d\n",iRet);
  DeleteLast(&Head);
  Display(Head);
  iRet = Count(Head);
  printf("Number of nodes are : %d\n",iRet);


  return 0;
}
