//************ Dynamic Memory Allocations ****************//

#include<stdio.h>

#include<stdlib.h>

int main(){
   
  //for malloc (must allocating and free)
  int *m;

  //for calloc (automatically freed)
  int *c = calloc(1,sizeof(int));

  //for realloc
  int *r;
  
  int numbers=10;

  //initilize malloc
  m = (int*) malloc (sizeof(int));

  //Assign numbers to pointers	
  *m = numbers;
  *c = numbers;
  /////////////////////////////
  
  //Realloc m
  r = realloc(m,1);

  //show value
  printf("Malloc = %d\n",*m);
  printf("Calloc = %d\n",*c);
  printf("Realloc = %d\n",*r);

  //Freed pointer
  free(m);
  return 0;
}
