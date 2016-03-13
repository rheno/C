#include "hashtable.h"

int main(){

  hashtable* h = new hashtable();
  
  h->put(1, 100);

  h->put(2, 5);

  cout<<h->get(1)<<endl;

  cout<<h->find(5)<<endl;

  
  delete h;

  return 0;
}
