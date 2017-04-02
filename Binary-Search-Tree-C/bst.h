#ifndef __bst__H
#define __bst__H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct BSTree{

	int data;
	struct BSTree* left;
	struct BSTree* right;
};

/* Insert Iterative */
void insert(struct BSTree** root, int data);

/* Insert Recursive */
struct BSTree* insertRec(struct BSTree* root, int data);

/* Get Most Right */
struct BSTree* mostRight(struct BSTree* root);

/* Delete Binary Tree */
struct BSTree* delete(struct BSTree* root, int data);

/* Check if Tree BST or Not*/
int isBST(struct BSTree* root, int min, int max);

/* Reverse BST */
void reverse(struct BSTree* root);

/* Print BST PreOrder */
void printPreorder(struct BSTree* root);


#endif

