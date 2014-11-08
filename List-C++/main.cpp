#include "list.h"
#include <iostream>

using namespace std;

int main(){
	
	List* l = new List;

	l->init();
	l->insertFirst(12);
	l->insertFirst(11);
	l->insertLast(13);
	l->insertAfter(l->search(13), 14);
	l->insertLast(15);
	l->deleteFirst();
	l->deleteLast();
	l->deleteAfter(l->search(12));
	l->printList();
	return 0;
}