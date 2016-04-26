/* dynamic programming */
/* Knapsack Solution */


#include <stdio.h>
#include <stdlib.h>

#define max(a,b) a > b ? a : b

int knapsack(int wt[], int val[], int W, int n){

  int sol[n+1][W+1];
  int i,j;

  for(i=0 ; i <= n; i++){

     for(j = 0; j <= W; j++){
	 if(i == 0 || j == 0){
	   sol[i][j] = 0;
	 }else if(j >= wt[i-1] ){
	   sol[i][j] = max(sol[i-1][j], sol[i-1][j-wt[i-1]] + val[i-1]);
	 }else{
	   sol[i][j] = sol[i-1][j];
	 }
     }
  }

  return sol[n][W];
}

int main(){
 
  int W;
  int wt[] = {50, 200, 300};
  int val[] = {10, 20, 30};
  W = 250;

  int n = sizeof(val) / sizeof(int);
  printf("knapsack = %d\n",knapsack(wt, val, W, n));

  return 0;
}
