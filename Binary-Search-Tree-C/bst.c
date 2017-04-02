#include "bst.h"


void insert(struct BSTree** root, int data){

	struct BSTree* node = (struct BSTree*) malloc (sizeof(struct BSTree));
	node->data = data;
	node->left = NULL;
	node->right = NULL;


	if(*root == NULL) {
		*root = node;
		return;
	}

	struct BSTree* curr = *root;

	while(curr != NULL){
		
		if(curr->data < data){

			if(curr->right == NULL){
				curr->right = node;
				return;
			}

			curr = curr->right;

		}else if(curr->data > data){

			if(curr->left == NULL){
				curr->left = node;
				return;
			}
		
			curr = curr->left;	
		}
	}


}


struct BSTree* insertRec(struct BSTree* root, int data){
	
	if(root == NULL){
		
		struct BSTree* node = (struct BSTree*) malloc (sizeof(struct BSTree));
		node->data = data;
		node->left = NULL;
		node->right = NULL;

		root = node;
		
	}

	if(root->data > data){
		root->left = insertRec(root->left, data);
	}else if(root->data < data){
		root->right = insertRec(root->right, data);
	}

	return root;
}


struct BSTree* mostRight(struct BSTree* root){
        if(root == NULL){
                return NULL;
        }else if(root->right == NULL){
                return root;
        }

        return mostRight(root->right);
}


struct BSTree* delete(struct BSTree* root, int data){
	
	if(root == NULL){
		return NULL;
	}else if(root->data == data){


		struct BSTree* del = NULL;

		if(root->left != NULL && root->right == NULL){
			del = root;
			root = root->left;
			free(del);
		}else if(root->left == NULL && root->right != NULL){
			printf("ini");
			del = root;
			root = root->right;
			free(del);
		}else if(root->left != NULL && root->right != NULL){
			del = root;
			struct BSTree* right = root->right;
			root = root->left;
			struct BSTree* b = mostRight(root);
			b->right = right;
			free(del);						
		}else if(root->left == NULL && root->right == NULL){
			root = NULL;
		}	
	
	}else if(root->data > data){
		root->left = delete(root->left, data);
	}else if(root->data < data){
		root->right = delete(root->right, data);
	}

	return root;
}


int isBST(struct BSTree* root, int min, int max){

	if(root == NULL){
		return 1;
	}

	if(root->data < min || root->data > max){
		return 0;
	}


	return isBST(root->left, min, root->data -1) && isBST(root->right, root->data + 1, max);
}

void reverse(struct BSTree* root){


	if(root == NULL){
		return;
	}


	struct BSTree* left = root->left;
	struct BSTree* right = root->right;
	
	root->left = right;
	root->right = left;		

	reverse(root->left);

	reverse(root->right);

	
}

void printPreorder(struct BSTree* root){
	
	if(root == NULL){
		return;
	}
	
	printPreorder(root->right);
	printf("%d\n",root->data);
	printPreorder(root->left);
}

