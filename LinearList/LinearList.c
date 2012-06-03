/**********************  boolean.h *************************/

#ifndef boolean_H
#define boolean_H
#define true 1
#define false 0

#define boolean unsigned char

#endif

/**********************************************************/


/********************** list.h *******************************/


#ifndef list_H
#define list_H
#include"boolean.h"
#define Info(P) (P)->info
#define Next(P) (P)->next 
#define First(L) (L).first

typedef char infotype;
typedef struct tElmtList *address;
typedef struct tElmtList{
  infotype info;
  address next;
}ElmtList; 

typedef struct{
   address first;
}List;

address allocation(infotype x);
void dealocation(address P);


boolean IsEmptyList(List L);
void MakeList(List *L);
void InsertFirst(infotype x, List *L);
void InsertAfter(infotype x, address prev, address after);
void InsertLast(infotype x, List *L);

void DeleteFirst(List *L);
void DeleteAfter(address prev, address after);
void DeleteLast(List *L);
void PrintList(List L); 
#endif


/***********************************************************/



/********************* list.c ********************************/


#include"list.h"
#include<stdlib.h>
#include<stdio.h>

//List Allocation
address allocation(infotype x)
{
  address P;
  P = (address) malloc (sizeof(ElmtList));
  if(P==NULL)
  {
    return NULL;
  }else
    Info(P) = x;
    Next(P) = NULL;
    return P; 
}

//Free List 
void dealocation(address P)
{
  free(P);
}

//Check if the List is Empty
boolean IsEmptyList(List L)
{
  return First(L) == NULL;
}

//Make First List
void MakeList(List *L)
{
  First(*L) = NULL; 
}

//Insert Element List at First Element
void InsertFirst(infotype x, List *L)
{
  address P = First(*L);
  if(First(*L)==NULL)
  {
    First(*L) = allocation(x);
  }else
   First(*L) = allocation(x);
   Next(First(*L)) = P; 
}

//Insert Element List between two Element List
void InsertAfter(infotype x, address prev, address after)
{
  Next(prev) = allocation(x);
  Next(Next(prev)) = after; 
}


//Insert Element List at Last List
void InsertLast(infotype x, List *L)
{
  address P = First(*L);
  while(Next(P)!=NULL)
  {
    P = Next(P);
  } 
  Next(P) = allocation(x);
}

//Delete First Element of List
void DeleteFirst(List *L)
{
  address P = First(*L);   
  if(First(*L)==NULL)
  {
    printf("Delete First Cannot be Done");
  }else
    First(*L) = Next(First(*L));
    dealocation(P);
}

//Delete Element List between two Elements
void DeleteAfter(address prev, address after)
{
  address P = after;
  if(prev==NULL)
  {
    printf("Delete After Cannot be Done");
  }else
  Next(prev) = Next(after);
  dealocation(P); 
}

//Delete Last Element of List
void DeleteLast(List *L)
{
  address del,last;
  address P = First(*L);
  if(P==NULL)
  {
    printf("Delete Last Cannot be Done");
  }else
  while(Next(P)!=NULL)
  {
    last = P;
    P = Next(P); 
  }
  del = P;
  Next(last) = Next(P);
  dealocation(del);
}


//Print All The Element of List
void PrintList(List L)
{
  address P = First(L);
  while(P!=NULL)
  {
    printf("\n%c",Info(P));
    P = Next(P);
  }
  
}



/***********************************************************/

