#include "list.h"

List::List(){
	// Constructor
}

List::~List(){
	// Destrcutor
	// Destroy List
	free(head);
}

void List::init(){
	head = NULL;
}

void List::insertFirst(int x){
	node* nodes = new node;
	nodes->info = x;
	nodes->next = NULL;
		
	if(head == NULL){
		head = nodes;
	}else{
		nodes->next = head;
		head = nodes;
	}
}

void List::insertLast(int x){
	node* nodes = new node;
	nodes->info = x;
	nodes->next = NULL;

	if(head == NULL){
		head = nodes;
	}else{
		node* n = head;	
		while(n->next!=NULL){	
			n = n->next;
		}
		n->next = nodes;		
	}
}

void List::insertAfter(node* prev, int x){
	node* nodes = new node;
	nodes->info = x;
	nodes->next = NULL;

	if(head == NULL){
		head = nodes;
	}else{
		node* n = head;	
		while(n->next!=NULL){	
			if(n == prev){
			
				break;
			}
			n = n->next;
		}

		nodes->next = n->next;
		n->next = nodes;
		
		
	}
}

void List::deleteFirst(){

	if(head == NULL){
		cout<<"empty list"<<endl;
	}else{
		node* del;
		del = head;
		head = head->next;
		free(del);
	}
}

void List::deleteAfter(node* prev){

	if(head == NULL){
		cout<<"empty list"<<endl;
	}else{
		node* del;
		node *n = head;
		while(n->next != NULL){
			if(n == prev){
				del = n->next;
				n->next = n->next->next;
				free(del);
				break;
			}	
			n = n->next;
		}
	}
}

void List::deleteLast(){

	if(head == NULL){
		cout<<"empty list"<<endl;
	}else{
		node* del;
		node *n = head;
		while(n->next != NULL){
			if(n->next->next == NULL){
				del = n->next;
				n->next = NULL;
				break;
			}	
			n = n->next;
		}
	}
}

node* List::search(int x){

	node *n = head;
	while(n != NULL){
		if(n->info == x){
			return n;
		}
		n = n->next;
	}
	return NULL;
}



void List::printList(){
	while(head!=NULL){
		cout<<head->info<<endl;
		head = head->next;
	}
}
