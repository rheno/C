#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;


struct node{
  int info;
  node* left;
  node* right;
};

int result=0;


class BinTree{

  public :

  void init(node* b);

  void insert(node** b, int x);
  
  void solution(node* b);

};

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

void BinTree::solution(node* b){
  if(b==NULL){
    return;
  }
  if(b!=NULL){ 

    result++;

    solution(b->left);
    solution(b->right);
  }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    BinTree* b = new BinTree;
    node* root = NULL;
    int i=0;
    char s[100];

    b->init(root);


    // There is no condition when the input stops
    while(true){
      scanf("%s",s);
      if(atoi(s)!=0){
        b->insert(&root, atoi(s));
      }
      i++;
    }

    b->solution(root);

    cout<<result<<endl;


    
    return 0;
}