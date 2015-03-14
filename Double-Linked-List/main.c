#include "DList.h"


int main(){

	struct DList* list;

	init(&list);

	/* Insert */
	insertFirst(&list, 2);  
	insertFirst(&list, 1);
	insertAfter(&list,2, 3);
	insertAfter(&list,3, 4);
	insertLast(&list,5);

	/* Delete */
	deleteFirst(&list);
  	deleteAfter(&list, 4);
  	deleteLast(&list);

  	/* Print List elements */
	printDList(list);


	return 0;
}