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


class BinTree{

  public :

  void init(node* b);

  void insert(node** b, int x);
  
  int solution(node* b);

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

int BinTree::solution(node* b){
  if(b==NULL){
    return 0;
  }
   
  return 1+solution(b->left)+solution(b->right);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    freopen("input000.txt","r",stdin);
    freopen("output000.txt","w",stdout);

    BinTree* b = new BinTree;
    node* root = NULL;
    int i=0, result = 0;
    char s[100];

    b->init(root);


    // There is no condition when the input stops
    while(i<9){
      scanf("%s",s);
      if(atoi(s)!=0){
        b->insert(&root, atoi(s));
      }
      i++;
    }

    result = b->solution(root);

    cout<<result<<endl;


    
    return 0;
}
