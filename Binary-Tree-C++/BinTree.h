

#ifndef __BinTree__H
#define __BinTree__H

#include <iostream>

using namespace std;

struct node{
  int info;
  node* left;
  node* right;
};




class BinTree{

  public :

  void init(node* b);

  void insert(node** b, int x);

  void insertNode(node** a, node** b);

  void remove(node** b, int x);
  
  void search(node* b, int x);

  bool isContain(node* b, int x);
  
  void print(node* b);

};



#endif






