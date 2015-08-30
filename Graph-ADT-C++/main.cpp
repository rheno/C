#include "graph.h"

int main(){

  /* Graph with 0,1,2,3 vertex */
  graph* g = new graph(4);
  
  g->addEdge(0,1); 
  g->addEdge(0,2);
  g->addEdge(0,3);

  g->printGraph();

  cout<<"DFS : "<<endl;
  g->dfs(0);

  cout<<"\nBFS : "<<endl;
  g->bfs(0);

  delete g;

  return 0;
}
