/* Dynamic Programming  */
/* Fibonacci solution   */
/* example : N = 3 : 1 + 1 = 2  */

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int N){
   
  int sol[1000];
  int i;

  if(N <= 1){
     return 1;
  }
 
  if(N == 2){
     return 2;
  }

  sol[0] = 1;
  sol[1] = 1;

  for(i=2;i<N;i++){
     sol[i] = sol[i-1] + sol[i-2];    
  }

  return sol[N-1];
 
}

int main(){

  int N;
  scanf("%d",&N);
  printf("fibonacci = %d",fibonacci(N));
  return 0;
}
