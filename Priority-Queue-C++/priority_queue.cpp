#include<iostream>

using namespace std;


struct node{
  int top;
  node* next;
};

class priority_queue{

public :

   priority_queue(){
 	q = NULL;
   }
   
   ~priority_queue(){
	delete q;
   }

   node* newNode(int x){
	
     node* n = new node;
     n->top = x;
     n->next = NULL;
   
     return n;
   }
  
   void push(int x){
     
     if(q == NULL){
	q = newNode(x);
     }else if(q->top > x){
	node* n = newNode(x);
        n->next = q;
	q = n;
     }else{
	
	node* p = q;
  	while(p->next != NULL){
	   if(p->top > x){
	      break;	
	   }	
	   p = p->next;
	}
	if(p != NULL){
        	p->next = newNode(x); 
        }else{
		p = newNode(x);
	}
     }

	
   }
      
   void pop(){
	
	if(q == NULL){
	   cout<<"Queue is empty"<<endl;
	}else{
	   node* del = q;
           q = q->next;
	   delete del;
	}
   }
 
   int top(){
	return q->top;
   }

private :
   
   node* q;
   

};

int main(){

  priority_queue* q = new priority_queue;
  

  q->push(3);

  q->push(2);
 
  q->push(1);

  
 cout<<q->top()<<endl;

  delete q;
   
  return 0;
}
