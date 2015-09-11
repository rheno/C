#include "tree.h"

int main(){

  tree* t = new tree;
  
  t->insert(5);
  t->insert(2);
  t->insert(1);
  t->insert(3);
  t->insert(7);
  t->insert(6);
  t->insert(8);

  t->deleteAt(7);
  t->deleteAt(6);
    
  t->printTree(t->getRoot());

  delete t; 

 
  return 0;
}
