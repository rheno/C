#ifndef __dplist__H
#define __dplist__H

#include <iostream>


using namespace std;

struct node{
  int info;
  node* prev;
  node* next;
};

struct dlist{
 node* first;
 node* last;
};

class double_linked_list{

public :

  double_linked_list();

  ~double_linked_list();

  node* newNode(int x);

  dlist* insertFirst(int x);

  dlist* insertAt(int index, int x);

  dlist* insertLast(int x);

  dlist* deleteFirst();

  dlist* deleteLast();

  dlist* deleteAt(int index);

  void printDList();

private :
  dlist* d;
};
#endif
