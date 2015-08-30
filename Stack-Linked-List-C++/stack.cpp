#include "stack.h"

stack::stack(){
  s = NULL; 
}

stack::~stack(){
  delete s;
}

node* stack:: newStack(int x){
   node* n = new node;
   n->top = x;
   n->next = NULL;

   return n;
}

int stack::top(){
   return s->top;
}

bool stack::isEmptyStack(){
   return s == NULL ? true : false;
}

void stack::push(int x){
  
   if(isEmptyStack()){
	s = newStack(x);
   }else{
	node* n = newStack(x);
        n->next = s;
        s = n;
   }
}


void stack::pop(){
   if(isEmptyStack()){
       cout<<"Stack Empty"<<endl;
   }else{
       node* del = s;
       s = s->next;
       delete del;	
   }
  
}

void stack::printStack(){
  if(isEmptyStack()){
	cout<<"Stack is NULL"<<endl;
  }else{
       node* n = s;
       while(n != NULL){
	  cout<<n->top<<endl;
	  n = n->next;
       }
  
  }
}
