#ifndef __tree__H
#define __tree__H

#include <iostream>

using namespace std;

struct node{
   
   int info;
   node* left;
   node* right;  

};


class tree{

public :
  
  tree();
  
  ~tree();

  node* getRoot();

  node* newNode(int x);

  node* search(int x, node* n);

  int getWidth(node* n);

  node* getRight(node* n);
  
  node* getLeft(node* n);

  node* insert(int x, node* n);

  void insert(int x);

  node* deleteAt(int x, node* n);

  void deleteAt(int x);

  void printTree(node * n);


private :

  node* root;

};


#endif
