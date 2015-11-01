#include "tree.h"

// Alocation new tree
struct BinTree* new(int x){
   
  struct BinTree* p = (struct BinTree*) malloc (sizeof(struct BinTree));
  
  if(p != NULL){

     p->info = x;
     p->left = NULL;
     p->right = NULL;
 
     return p;
  }
 
  return NULL;
}

// Get most left tree
struct BinTree* getLeft(struct BinTree* root){
   if(root == NULL){
	return NULL;
   }else if(root->left == NULL){
	return root;
   }

   return getLeft(root->left);
}

// Get most right tree
struct BinTree* getRight(struct BinTree* root){
   if(root == NULL){
        return NULL;
   }else if(root->right == NULL){
	return root;
   }

   return getRight(root->right);
}

//Insert Elemenet to tree
struct BinTree* insert(int x, struct BinTree* root){
   
   if(root == NULL){
        root = new(x);
   }else if(root->info > x){
	root->left = insert(x, root->left);
   }else if(root->info < x){
	root->right = insert(x, root->right);
   }
  
   return root;
}

//Delete Element tree
struct BinTree* delete(int x, struct BinTree* root){
  
  if(root == NULL){
  	return NULL;
  }else if(root->info == x){

	if(root->left == NULL && root->right == NULL){
		root = NULL;
    	}else if(root->left != NULL && root->right == NULL){
		struct BinTree* del = root;
		root = root->left;
		
		free(del);
 	}else if(root->left == NULL && root->right != NULL){
		struct BinTree* del = root;
		root = root->right;
		free(del);
	}else{
		struct BinTree* del = root;
		struct BinTree* right = root->right;
		root = root->left;
		getRight(root)->right = right;
		free(del);
	}


  }else if(root->info > x){
	root->left = delete(x, root->left);
  }else if(root->info < x){
	root->right = delete(x, root->right);
  }
 
  return root;

}

// reverse binary tree
struct BinTree* reverse(struct BinTree* root){

   struct BinTree* temp;
   if(root == NULL){
	return NULL;
   }
 
  
   temp = new(root->info);
   temp->left = reverse(root->right);
   temp->right = reverse(root->left);
   
  return temp;
  
}

// print tree pre-order
void printTree(struct BinTree* root){
  if(root == NULL){
	return;
  }

  printf("%d\n",root->info);
  printTree(root->left);
  printTree(root->right);
}


