#include "queue.h"

int main(){

  /* implment queue */
  queue* q = new queue;
  q->insert(1); // q = {1}
  q->insert(2); // q = {1,2}
  q->remove(); // q = {2}

  q->printQueue();

  delete q;

  return 0;
}
