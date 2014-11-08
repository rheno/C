#ifndef __tree__H
#define __tree__H
#include<stdio.h>
#include<stdlib.h>

struct BinTree{
  int info;
  struct BinTree* left;
  struct BinTree* right;
};

void initBinTree(struct BinTree** b);

void add(int x, struct BinTree** root);

void search(int x,struct BinTree* root);

#endif
