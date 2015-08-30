#ifndef __graph__H
#define __graph__H

#include <iostream>

using namespace std;

struct node{
   int top;
   node* next;
};

class queue{

public :
    queue(){

      q = NULL;

    }

    ~queue(){

      delete q;

    }

    bool isEmptyQueue(){
      return q == NULL ? true : false;
    }

    int top(){
      return q->top;
    }

    node* newQueue(int x){

      node* n = new node;
      n->top = x;
      n->next = NULL;

      return n;
    }

    void insert(int x){

      node* n = newQueue(x);

      if(isEmptyQueue()){

        q = n;

      }else{

	node* p = q;
        while(p->next != NULL){

          p = p->next;

        }

        p->next = n;
      }

    }

    void remove(){

      if(isEmptyQueue()){

        cout<<"Queue Empty"<<endl;

      }else{

        node* del = q;
        q = q->next;
        delete del;

      }
    }

private :

  node* q;

};


struct adjNode{
  int dest;
  int weight;
  adjNode* next;
};

struct adjListNode{
  adjNode* head;
};


class graph{

public :

  graph(int v);

  ~graph();

  void resetStatus();

  adjNode* newNode(int x);

  adjNode* newNode(int x, int w);

  void addEdge(int src, int dest);

  void dfs(int v);

  void bfs(int v);

  adjListNode* getListNode();

  void printGraph();

private :

  int V;

  adjListNode* array;

  bool *status;

};

#endif
