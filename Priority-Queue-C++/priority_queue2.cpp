#include <iostream>

using namespace std;

struct node{
  int top;
  node* next;
};


class priority_queue{

public :
   
   priority_queue(){
	pq = NULL;
   }

   ~priority_queue(){
	delete pq;
   }
  
   node* newNode(int x){
	
 	node* n = new node;
 	n->top = x;
	n->next = NULL;
	return n;
   }

   
   node* push(int x, node* n){
	if(n == NULL){
	    n = newNode(x);
	}else if(n->top > x){
	    node* p = newNode(x);
	    p->next = n;
	    n = p;
	}else if(n->top < x && n->next == NULL){
	    n->next = newNode(x);	    
	}else{
	    n->next = push(x,n->next);
        }

	return n;

   }	

   void push(int x){
	
	if(pq == NULL){
	   pq = newNode(x);  
	}else{
	   pq = push(x, pq);
        }
   }

   void pop(){
	
	if(pq == NULL){
	   cout<<"Queue Empty"<<endl;
	}else{
	   node* del = pq;
	   pq = pq->next;
	   delete del;
	}
   }

   int top(){
	return pq->top;
   }

private :

node* pq;


};

int main(){

   priority_queue* p = new priority_queue;
 
   p->push(5);
   p->push(1);
   p->push(3);
   p->push(2);
  

   cout<<p->top()<<endl;
	
   delete p;
  
  return 0;
}
