#include "tree.h"

int main(){

  struct BinTree* root;

  root = (struct BinTree*) malloc (sizeof(struct BinTree));

  //Init Tree
  initBinTree(&root);

  //Add element to root
  add(1,&root);

  //Add element to node left
  add(2,&root);

  //Add element to node right
  add(3,&root);

  //Find element in node
  search(2,root);

  return 0;
}
