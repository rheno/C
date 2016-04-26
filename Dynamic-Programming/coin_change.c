/* Dynamic Programming */
/* Coin Change Solution */
/* Example : T = {1,2,3} N = 4, Answer : {1,1,1,1}, {1,1,2}, {1,3}, {2,2} = 4 */

#include <stdio.h>
#include <stdlib.h>

int coin_change(int T[], int length, int N){

   int sol[N+1][length];
   int i, j, x, y;


   for(i = 0;i < length ; i++){
      sol[0][i] = 1;
   }   

   for(i = 1; i < N+1; i++){

      for(j = 0;j < length ; j++ ){
         
             x = (i-T[j] >= 0)? sol[i - T[j]][j]: 0;

	     y = (j >= 1)? sol[i][j-1]: 0;

	     // total count 
	     sol[i][j] = x + y;   	         
      }	

   }

  
   return sol[N][length-1];
}

int main(){

  int C[] = {2,5,3, 6};
  int N = 10;

  int length  = sizeof(C) / sizeof(int);
  printf("coin change : %d\n", coin_change(C, length, N));

  return 0;
}
