/********* Greedy Algorithm ******************/

/*  Created By rhenobudiasa@yahoo.com       **/   

/*  Solution for greedy minimum coin change **/

/*********************************************/ 


#include<stdio.h>

/* define how many input array */
#define N 5

/* define how many change will get */ 
#define G 100


/* Greedy algorithm function */
void greedy(int input[]){
  int i,j,total=G, coin=0, find=0;
    for(i=0;i<N;i++){
      /* find rest of the coin */
      total = total - input[i];
     
      /* sum of coin */
      coin++;

      /* check rest of coin from current input item (solution) */
      if(total%input[i] == 0){
        coin = coin + (total/input[i]);
        find = 1;
        printf("Solution = %d coin",coin);
	return;
      }
    }

    /* if no solution found */
    if(find==0){
      printf("No Solution");
    }
}


/*  Implementation  */
int main(){
  
  /* input Array */
  int input[] = {50,40,30,20,10};
  
  /* greedy function implementation */  
  greedy(input);

  return 0;
}
