#include "tree.h"


//Binary Tree Initilization
void initBinTree(struct BinTree** b){
  *b = NULL;
}


//Add Elemenet to tree
void add(int x, struct BinTree** root){
  struct BinTree* b = (struct BinTree*) malloc (sizeof(struct BinTree));
  b->info = x;
  b->left = NULL;
  b->right = NULL;

  if(*root==NULL){
    *root = b;
  }else if((*root)->left==NULL){
    (*root)->left = b;
  }else if((*root)->right==NULL){
    (*root)->right = b;
  }else{
    add(x,root);
  }
}


//search Elemenet in tree
void search(int x,struct BinTree* root){
  if(root == NULL){
    printf("Not Found");
  }else if(root->info == x){
    printf("Found");
  }else if(root->left == NULL){
    search(x,root->right);
  }else{
    search(x,root->left);
  }

}
