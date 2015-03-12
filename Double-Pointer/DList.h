#ifndef __DList__H
#define __DList__H
#include <stdio.h>
#include <stdlib.h>



struct DList{
  int info;
  struct DList* prev;
  struct DList* next;
};


/* Insert */
void init(struct DList** l);
void insertFirst(struct DList** l, int x);
void insertAfter(struct DList** l, int after, int x);
void insertLast(struct DList** l, int x);

/* Delete */
void deleteFirst(struct DList** l);
void deleteAfter(struct DList** l, int after);
void deleteLast(struct DList** l);

/* Print List */
void printDList(struct DList* l);

#endif