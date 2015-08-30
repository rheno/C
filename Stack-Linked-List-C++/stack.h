#ifndef __stack__H
#define __stack__H

#include <iostream>

using namespace std;

struct node{

  int top;
  node* next;

};

class stack{

public :
   stack();
   
   ~stack();
   
   node* newStack(int x);

   int top();
   
   void push(int x);
   
   void pop();
   
   bool isEmptyStack();

   void printStack();

private :
   node* s;
  
};

#endif
