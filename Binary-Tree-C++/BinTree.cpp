#include "BinTree.h"

void BinTree::init(node* b){  
 b = NULL; 
}


void BinTree::insert(node** b, int x){

  if(*b == NULL){

   *b = new node;
   (*b)->info = x;
   (*b)->left = NULL;
   (*b)->right = NULL;
 }else{
  if((*b)->info > x){
    insert(&(*b)->left, x);
  }
  if((*b)->info < x){
    insert(&(*b)->right, x);
  }
}
}

void BinTree::insertNode(node** a, node** b){

  if(*a == NULL){
    *a= *b;
    return;
  }else{
   insertNode(&(*a)->right, &(*b));
 }
}


void BinTree::search(node* b, int x){

  if(b == NULL){
    cout<<"not found"<<endl;
    return;
  }
  if(b->info == x){
    cout<<"found"<<endl; 
  }else{
    if(b->info > x){
      search(b->left, x);
    }
    if(b->info < x){
      search(b->right, x);
    }
  }
}

bool BinTree::isContain(node* b, int x){
  if(b == NULL){    
    return false;
  }
  if(b->info == x){
    return true;
  }else{
    if(b->info > x){
      return isContain(b->left, x);
    }
    if(b->info < x){
      return isContain(b->right, x);
    }
  }
  return false;
}

void BinTree::remove(node** b, int x){

  if(*b == NULL){
    cout<<"Empty Tree"<<endl;
    return;
  }

  if((*b)->info == x){
    if((*b)->left == NULL && (*b)->right == NULL){
      node *temp = *b;//delete(&(*b)->left, x);
      *b = NULL;
      delete temp;
    }else if((*b)->left == NULL){
      node *temp = *b;
      *b = (*b)->right;
      delete temp;
    }else if((*b)->right == NULL){
      //insert(b->right, x);
      node *temp = *b;
      *b = (*b)->left;
      delete temp;
    }else{

      node *temp = *b;
      node *temp1 = (*b)->right;
      *b = (*b)->left;
      delete temp;
      insertNode(&(*b),&temp1);
      //cout<<"Pasti masuk sini"<<endl;
    }  
  }else{
    if((*b)->info > x){
      remove(&(*b)->left, x);
    }
    if((*b)->info < x){
      remove(&(*b)->right, x);
    }
  }
}

void BinTree::print(node* b){
  if(b==NULL){
    return;
  }
  if(b!=NULL){ 

    cout<<b->info<<endl;

    print(b->left);
    print(b->right);
  }
}
