#include "queue.h"

queue::queue(){
  q = NULL;
}

queue::~queue(){
  delete q;
}

bool queue::isEmptyQueue(){
  return q == NULL ? true : false;
}

int queue::top(){
  return q->top;
}

node* queue::newQueue(int x){
  node* n = new node;
  n->top = x;
  n->next = NULL;

  return n;
}

void queue::insert(int x){

  node* n = newQueue(x);

  if(isEmptyQueue()){
     q = n;
  }else{
     node* p = q;
     while(p->next != NULL){
	p = p->next;
     }

     p->next = n;
  }

}


void queue::remove(){

   if(isEmptyQueue()){
      cout<<"Queue Empty"<<endl;
   }else{
      node* del = q;
      q = q->next;
      delete del;
   }
}

void queue::printQueue(){
   if(isEmptyQueue()){
	cout<<"Queue Empty"<<endl;
   }else{
        node* p = q;
        while(p != NULL){
	   cout<<p->top<<endl;
	   p = p->next;
        }
   }
}
