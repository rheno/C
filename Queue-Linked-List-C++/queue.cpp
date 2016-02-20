#include "queue.h"

queue::queue(){
  front = rear = NULL;
}

queue::~queue(){
}

bool queue::isEmptyQueue(){
  return front == NULL && rear == NULL ? true : false;
}

node* queue::get_front(){
  return front;
}

node* queue::get_rear(){
  return rear;
}



node* queue::newQueue(int x){
  node* n = new node;
  n->data = x;
  n->next = NULL;

  return n;
}

void queue::insert(int x){

  node* n = newQueue(x);

  if(isEmptyQueue()){
     front = rear = n;
  }else{
    
    rear->next = n;
    rear = n;
   
  }

}


void queue::remove(){

   if(isEmptyQueue()){
      cout<<"Queue Empty"<<endl;
   }else if(front == rear){
	front = rear = NULL;
   }else{
      node* del = front;
      front = front->next;
      delete del;
   }
}


void queue::printQueue(){
   if(isEmptyQueue()){
	cout<<"Queue Empty"<<endl;
   }else{
        node* p = rear;
        while(p != NULL){
	   cout<<p->data<<endl;
	   p = p->next;
        }
   }
}
