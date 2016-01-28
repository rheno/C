#include <iostream>

using namespace std;

class node{

public :

int data;
node* next;

node(int data){
  this->data = data;
  this->next = NULL;
}

};


class list{

public :

node* insert(node* head, int x){
   if(head == NULL){
	head = new node(x);
   }else{
        head->next = insert(head->next, x);
   }
  return head;
}

/* if sorted */
node* removesame1(node* head){
   if(head == NULL){
	return NULL;	
   }else if(head->next != NULL){
	if(head->data == head->next->data){
	   node* del = head;
	   head = removesame1(head->next);
	   delete del;
 	}
   }
   head->next = removesame1(head->next);

   return head;	
}

/* if not sorted */
void removesame2(node* head){
  if(head == NULL){
    return;
  }
 
  node* start = head;
  
  while(start->next != NULL){
      node* p = start->next;
      while(p != NULL){
	if(p->next != NULL){
	    if(start->data == p->next->data){
	  	node* del = p->next;
                p->next = p->next->next;
                delete del;
	    }
          
    	}
   	p = p->next;
      }
      start = start->next;	 
  }

}

void print_list(node* head){
   node* l = head;

   while(l != NULL){
	cout<<l->data<<endl;
	l = l->next;
   }
}

};

int main(){
  list l;
  node* n = NULL;
  n = l.insert(n,1);
  n = l.insert(n,2);
  n = l.insert(n,4);
  n = l.insert(n,3);
  n = l.insert(n,1);
  //n = l.removesame1(n);
  //l.print_list(n); 
  l.removesame2(n);
  l.print_list(n);
  return 0;
}
