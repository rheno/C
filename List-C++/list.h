#ifndef __list__H
#define __list__H

#include <iostream>

using namespace std;

struct node{
	int info;
	node *next;
};

class List{

public :
	List();

	~List();

	void init();

	void insertFirst(int x);

	void insertLast(int x);

	void insertAfter(node* prev, int x);

	void deleteFirst();

	void deleteAfter(node* prev);

	void deleteLast();

	node *search(int x);
	
	void printList();

private :
	node* head;
};

#endif
