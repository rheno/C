#include <stdio.h>
#include <stdlib.h>

struct list{
	int data;	
	struct list* next;
};

void insert(struct list** first, int data){
	
	struct list* newlist = (struct list*) malloc (sizeof(struct list));
	newlist->data = data;
	newlist->next = NULL;

	if(*first == NULL){
		*first = newlist;
		return;
	}

	if((*first)->data >= data){

		newlist->next = *first;
		*first = newlist;
	
		return;
	}

	struct list* current = *first;	

	while(current != NULL){
	
		if(current->next != NULL && current->next->data >= data){

			struct list* next = current->next;
			current->next = newlist;
			newlist->next = next;
			return;	

		}else if(current->next == NULL){
			current->next = newlist;
			return;
		}else{
			current = current->next;
		}
	}


}

void delete(struct list** first, int data){
	
	if(*first == NULL){
		printf("list empty");
		return;
	}

	if((*first)->data == data){
		
		while(*first != NULL && (*first)->data == data){
			struct list* del = *first;
			*first = (*first)->next;
			free(del);
		}
		
		return;
	}

	struct list* curr = *first;

	while(curr != NULL){
		if(curr->next != NULL && curr->next->data == data){
			struct list* del = curr->next;
			curr->next = curr->next->next;
			free(del);		
		}else{
			curr = curr->next;
		}
	}
	
}

void printList(struct list* first){

	struct list* curr = first;

	if(first == NULL){
		return;
	}	

	while(curr != NULL){
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	
	
}

int main(){

	struct list* first = NULL;

	insert(&first, 1);
	insert(&first, 2);
	insert(&first, 3);
	insert(&first, 2);
	insert(&first, 1);
	insert(&first, 3);
	insert(&first, 1);
	
	delete(&first, 3);
	delete(&first, 1);
	delete(&first, 10);

	printList(first);
	return 0;
}
