/* Dynamic Programming */
/* Longest Common Subsequence Solution */

#include <stdio.h>
#include <stdlib.h>

int lcs(int P[], int T[], int n, int m){

  int i, j;
  int ans = 0;
  int sol[n][m];

  for(i = 0;i < n; i++){
    for(j = 0;j < m; j++){
        if(P[i] == T[j]){
	     sol[i][j] = sol[i-1][j-1] + 1;
        }else{
	     sol[i][j] = sol[i-1][j] >= sol[i][j-1] ? sol[i-1][j] : sol[i][j-1];
        }
    }
  }

  return sol[n-1][m-1];
}

int main(){
 
 int P[] = {1,2,3,4};
 int T[] = {2,3};
 int m, n; 

 n = sizeof(P) / sizeof(int);
 m = sizeof(T) / sizeof(int);

  printf("lcs = %d\n", lcs(P, T, n , m));
 
  return 0;
}
