#ifndef __queue__H
#define __queue__H

#include <iostream>

using namespace std;

struct node{
  
   int data;
   node* next;   

};


class queue{

public :
   
   queue();
   
   ~queue();

   bool isEmptyQueue();
  
   node* get_front();
   
   node* get_rear();

   node* newQueue(int x);

   void insert(int x);
   
   void remove();

   void printQueue();

private :

   node* front;
   
   node* rear;

};


#endif
