#include "dplist.h"
#include <iostream>

using namespace std;

int main(){

	double_linked_list* d = new double_linked_list;
	d->insertFirst(1);
	d->insertLast(3);
	d->insertAt(1,2);
	d->insertAt(3,4);
	d->insertLast(5);
	d->printDList();
	

	return 0;
}
