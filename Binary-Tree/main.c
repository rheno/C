#include "tree.h"

int main(){
  
  struct BinTree* root = NULL;  

  root = insert(5,root);
  root = insert(3,root); 
  root = insert(4,root); 
  root = insert(2,root);
  root = insert(7,root);
  root = insert(6,root);
  root = insert(8,root);
 
  printf("Before delete : \n");
  printTree(root);
 
  printf("after delete root : \n");
  root = delete(5, root);
  printTree(root);

  printf("after reverse : \n");
  root = reverse(root);
  printTree(root);
 
  return 0;
}

