#include "BinTree.h"
#include <iostream>

using namespace std;

int main(){
  
  BinTree* b = new BinTree;
  node* root = NULL;


  /* init Tree */
  b->init(root);

  /* Insert */
  b->insert(&root, 5);
  b->insert(&root, 1);
  b->insert(&root, 7);
  b->insert(&root, 6);
  b->insert(&root, 9);
  b->insert(&root, 2);


  /* Print Tree */
  b->print(root);


  /* Remove root */
  b->remove(&root, 5);

  /* Print Tree after remove root */
  b->print(root);


  return 0;
}
