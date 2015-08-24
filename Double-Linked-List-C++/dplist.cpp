#include "dplist.h"

double_linked_list::double_linked_list(){
  d = new dlist;
  d->first = NULL;
  d->last = NULL;
}


double_linked_list::~double_linked_list(){
  delete d;
}


node* double_linked_list::newNode(int x){
  node* n = new node;
  n->info = x;
  n->prev = NULL;
  n->next = NULL;

  return n;
}

dlist* double_linked_list::insertFirst(int x){
  node* n = newNode(x);

  if(d->first == NULL && d->last == NULL){
     d->last = n;
     d->first = n;
  }else{

    n->next = d->first;
    d->first = n;

    node* p = d->last;

    while(p->prev != NULL){
       p = p->prev;
    }

    p->prev = n;

  }

  return d;
}

dlist* double_linked_list::insertAt(int index, int x){
  node* n = newNode(x);

  if(d->first == NULL && d->last == NULL){
     return insertFirst(x);
  }else{

    if(index == 0){
      return insertFirst(x);
    }else{

      int i = 0;
      node* p = d->first;
      while(p->next != NULL){
          if(i+1 == index){
              break;
          }
          p = p->next;
          i++;
      }

      if(p->next == NULL){
        return insertLast(x);
      }else{
        n->prev = p;
        n->next = p->next;
        p->next->prev = n;
        p->next = n;

    }
   }
 }

 return d;
}

dlist* double_linked_list::insertLast(int x){
  node* n = newNode(x);
  if(d->first == NULL && d->last == NULL){
    d->last = n;
    d->first = n;
  }else{


    n->prev = d->last;
    d->last = n;

    node* p = d->first;
    while(p->next != NULL){
	     p = p->next;
    }

    p->next = n;

  }
  return d;
}

dlist* double_linked_list::deleteFirst(){
  if(d->first == NULL){
    return NULL;
  }else{
	   node* del = d->first;
     d->first = d->first->next;
	   d->first->prev = NULL;
	   delete del;
  }

  return d;
}

dlist* double_linked_list::deleteLast(){
  if(d->last == NULL){
     return NULL;
  }else{
     node* del = d->last;
     d->last = d->last->prev;
     d->last->next = NULL;
     delete del;
  }

  return d;
}

dlist* double_linked_list::deleteAt(int index){
  if(d->first == NULL){
    return NULL;
  }else{
	   if(index == 0){
       return deleteFirst();
     }else{
       int i=0;
       node* p = d->first;

       while(p != NULL){
         if(i+1 == index){
           break;
         }
         i++;
         p = p->next;

       }

          if(p->next == NULL){
            cout<<"delete not available"<<endl;
            return NULL;
          }else if(p->next->next != NULL){
            node* del = p->next;
            p->next = p->next->next;
            p->next->prev = p->next->prev->prev;

  	        delete del;
          }else{
            return deleteLast();
          }

     }
  }

  return d;
}

void double_linked_list::printDList(){
  node* first = d->first;
  node* last = d->last;

  cout<<"\nfirst : "<<endl;
  while(first != NULL){
    cout<<first->info<<endl;
    first = first->next;
  }

  cout<<"\nlast : "<<endl;
  while(last != NULL){
    cout<<last->info<<endl;
    last = last->prev;
  }
}
