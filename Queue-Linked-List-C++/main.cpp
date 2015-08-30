#include "queue.h"

int main(){

  /* implment queue */
  queue* q = new queue;
  q->insert(1); // q = {1}
  q->insert(2); // q = {1,2}
  q->remove();

  cout<<"top = "<<q->top()<<endl; // top = 1
  
  delete q;

  return 0;
}
