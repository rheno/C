#ifndef __queue__H
#define __queue__H

#include <iostream>

using namespace std;

struct node{
  
   int top;
   node* next;   

};


class queue{

public :
   
   queue();
   
   ~queue();

   bool isEmptyQueue();
  
   int top();

   node* newQueue(int x);

   void insert(int x);
   
   void remove();

   void printQueue();

private :

   node* q;

};


#endif
