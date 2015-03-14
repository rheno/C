#include "DList.h"

void init(struct DList** l){
	*l = NULL;
}
void insertFirst(struct DList** l, int x){
	struct DList* add = (struct DList*) malloc (sizeof(struct DList));
	add->info = x;
	if(*l == NULL){
		add->next = *l;
		add->prev = NULL;
	}else{

		(*l)->prev = add;
		add->next = *l;
	}
	*l = add; 
}
void insertAfter(struct DList** l, int after, int x){

	struct DList* add = (struct DList*) malloc (sizeof(struct DList));
	if(*l == NULL){
		insertFirst(l, x);
	}else{

		struct DList* p = *l;

		while(p!=NULL){
			if(p->info == after){
				break;
			}
			p = p->next;
		}

		add->info = x;
		add->next = p->next;
		add->prev = p;
		p->next = add;

	}
}
void insertLast(struct DList** l, int x){

	struct DList* add = (struct DList*) malloc (sizeof(struct DList));
	if(*l == NULL){
		insertFirst(l, x);
	}else{

		struct DList* p = *l;

		while(p->next!=NULL){
			p = p->next;
		}

		add->info = x;
		add->prev = p;
		p->next = add;
		add->next = NULL;

	}
}



void deleteFirst(struct DList** l){
	if(*l == NULL){
		printf("Delete not available");
	}else{
		struct DList* p = *l;

		*l = p->next;

		free(p);
	}
}

void deleteAfter(struct DList** l, int after){
	if(*l == NULL){
		printf("Delete not available");
	}else{
		struct DList* p = *l;
		struct DList* del = NULL;


		while(p!=NULL){
			if(p->next->info == after){
				del = p->next;
				p->next = p->next->next;
				break;
			}

			p = p->next;
		}
		
		free(del);
	}	
}


void deleteLast(struct DList** l){
	if(*l == NULL){
		printf("Delete not available");
	}else if((*l)->next == NULL){
		deleteFirst(l);
	}else{

		struct DList* p = *l;
		struct DList* del = NULL;


		while(p->next!=NULL){
			if(p->next->next == NULL){
				del = p->next;
				p->next = p->next->next;
				break;
			}

			p = p->next;
		}
		
		free(del);

	}
}


void printDList(struct DList* l){
	while(l!=NULL){
		printf("\n%d",l->info);
		l = l->next;
	}
}
