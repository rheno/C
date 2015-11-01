#ifndef __tree__H
#define __tree__H
#include<stdio.h>
#include<stdlib.h>

struct BinTree{
  int info;
  struct BinTree* left;
  struct BinTree* right;
};

struct BinTree* new(int x);

struct BinTree* insert(int x, struct BinTree* root);

struct BinTree* delete(int x, struct BinTree* root);

struct BinTree* getLeft(struct BinTree* root);

struct BinTree* getRight(struct BinTree* root);

struct BinTree* reverse(struct BinTree* root);

void printTree(struct BinTree* root);

#endif
