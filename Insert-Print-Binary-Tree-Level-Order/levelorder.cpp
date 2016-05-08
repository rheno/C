/* Insert and Print Binary Tree Level Order */

#include <iostream>
#include <queue>

using namespace std;

struct node{

int data;
node* left;
node* right;

};

node* InsertLevelOrder(int x, node* root){
   
   if(root == NULL){
      node* n = new node;
      n->data = x;
      n->left = NULL;
      n->right = NULL;
      root = n;
   }else{

      queue<node*> q;
      q.push(root);

      while(q.front()->right != NULL && q.front()->left != NULL){

          if(q.front()->left != NULL){
	     q.push(q.front()->left);
          }
          if(q.front()->right != NULL){
	     q.push(q.front()->right);
          }
          
	  q.pop();
      }

      node* n = new node;
      n->data = x;
      n->left = NULL;
      n->right = NULL;

      if(q.front()->left == NULL){
	  q.front()->left = n;
      }else{
          q.front()->right = n;
      }     
      
   }
   
  
  
   return root;
}

void PrintLevelOrder(node* root){
    
  queue<node*> q;
  q.push(root);

  while(q.size() != 0){
     
    int len = q.size();
    
    while(len > 0){
        node* temp = q.front();
        cout<<temp->data<<" ";    
        if(temp->left != NULL){
	   q.push(temp->left);
        }
        if(temp->right != NULL){
	   q.push(temp->right);
        }
	len--;
        q.pop();
    }
    cout<<endl;
  } 
}

int main(){


   node* root = NULL;

   root = InsertLevelOrder(1, root);
   root = InsertLevelOrder(2, root);
   root = InsertLevelOrder(3, root);
   root = InsertLevelOrder(4, root);
   root = InsertLevelOrder(5, root);
   root = InsertLevelOrder(6, root);
   root = InsertLevelOrder(7, root);

   PrintLevelOrder(root);

   return 0;
}
