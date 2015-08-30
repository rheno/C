#include "stack.h"

int main(){

  /* implement stack */
  stack* s = new stack;

  s->push(1); // s = {1}
  s->push(2); // s = {2,1}
  cout<<"top = "<<s->top()<<endl;  // top = 2

  delete s;

  return 0;
}
