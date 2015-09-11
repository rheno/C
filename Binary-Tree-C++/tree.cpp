#include "tree.h"

tree::tree(){
  root = NULL;
}

tree::~tree(){
  delete root; 
}

node* tree::getRoot(){
  return root;
}

node* tree::newNode(int x){
  
  node* n = new node;
 
  n->info = x;
  n->left = NULL;
  n->right = NULL;
  
  return n;

}

node* tree::search(int x, node* n){

   if(n->left == NULL && n->right == NULL){
       return NULL;
   }else if(n->info == x){
      return n;
   }else if(n->info > x){
      n->left =  search(x, n->left);	 
   }else if(n->info < x){
      n->right = search(x, n->right);
   } 
   return NULL;
}

int tree::getWidth(node* n){
   if(n == NULL){
     return 0;
   }

   return 1+getWidth(n->left)+getWidth(n->right);
}

node* tree::getRight(node* n){
  
 
  if(n->right == NULL){
     return n;
  }
  
  return getRight(n->right);
  
}

node* tree::getLeft(node* n){
  
  if(n->left == NULL){
     return n;	
  }  

  return getLeft(n->left);
}

node* tree::insert(int x, node* n){
   
   if(n == NULL){
	n = newNode(x);
   }else if(n->info > x){
	n->left = insert(x, n->left);
   }else if(n->info < x){
        n->right = insert(x, n->right);
  }

  return n;
}

void tree::insert(int x){
  root = insert(x, root);
}

node* tree::deleteAt(int x, node* n){
  
  if(n->info == x){
  
    if(n->left == NULL && n->right == NULL){
       node* del = n;
       n = NULL;
       delete n;
    }else if(n->left == NULL && n->right != NULL){
       node* del = n;
       n = n->right;
       delete del;	
    }else if(n->left != NULL && n->right == NULL){
       node* del = n;
       n = n->left;
       delete del;
    }else{
        
       node* del = n;
       node* right = n->right;
       n = n->left;
       getRight(n)->right = right;
       delete del;

    
       
    }
    
        
    
     
  }else if(n->info > x){
    n->left = deleteAt(x, n->left);
  }else if(n->info < x){
    n->right = deleteAt(x, n->right);
  }

  return n;
}

void tree::deleteAt(int x){
   if(root == NULL){
	cout<<"Unable to delete"<<endl;
   }else{
       root = deleteAt(x, root);     
   }
}


void tree::printTree(node* n){

  if(n == NULL){
     return;	
  }  

  cout<<n->info<<endl;

  printTree(n->left);

  printTree(n->right); 
 
}


