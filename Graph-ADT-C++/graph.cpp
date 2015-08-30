#include "graph.h"

graph::graph(int v){

   array = new adjListNode[v];

   status = new bool[v];

   V = v;

   for(int i=0;i<V;i++){
      array[i].head = NULL;
   }

   resetStatus();

}

graph::~graph(){
   delete array;
}

void graph::resetStatus(){

   for(int i=0;i<V;i++){
	status[i] = false;
   }
}

adjNode* graph::newNode(int x){
   adjNode* n = new adjNode;
   n->dest = x;
   n->weight = 0;
   n->next = NULL;

   return n;
}

adjNode* graph::newNode(int x, int w){
   adjNode* n = new adjNode;
   n->dest = x;
   n->weight = w;
   n->next = NULL;

   return n;
}

void graph::addEdge(int src, int dest){

   adjNode* n = newNode(dest);
   n->next = array[src].head;
   array[src].head = n;


   /* add if graph undirect */
   /*
   n = newNode(src);
   n->next = array[dest].head;
   array[dest].head = n;
   */

}

adjListNode* graph::getListNode(){
   return array;
}

void graph::dfs(int v){

   status[v] = true;
   
   cout<<v<<endl;

   adjNode* p = getListNode()[v].head;

   while(p != NULL){

	if(p->dest != v && status[p->dest] == false){
	    dfs(p->dest);
	}
 	p = p->next;

   }

}

void graph::bfs(int v){

   queue* q = new queue;
   
   q->insert(v); 

   while(!q->isEmptyQueue()){

	cout<<q->top()<<endl;  

 	adjNode* p = getListNode()[q->top()].head;

        q->remove(); 
    
        while(p != NULL){
	
	    q->insert(p->dest);	
      	    p = p->next;

        }

	
   }
  
   delete q;
  
}


void graph::printGraph(){
   
  for(int i=0;i<V;i++){
	
	cout<<"Vertex : "<<i<<endl;

 	adjNode* p = getListNode()[i].head;
 
        while(p != NULL){
	    cout<<" -> "<<p->dest;
	    p = p->next;
        }
        cout<<"\n";
  }
}
