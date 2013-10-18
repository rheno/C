/********* Greedy Algorithm ******************/

/*  Created By rhenobudiasa@yahoo.com       **/   

/*  Solution for greedy minimum coin change **/

/*********************************************/ 


#include<stdio.h>

/* define how many input array */
#define N 4

/* define how many change will get */ 
#define G 32


/* Greedy algorithm function */
void greedy(int input[]){
  int i,j,total=G, coin=0, find=0;
    for(i=0;i<N;i++){
      /* find rest of the coin */
      if(total - input[i] >=0){
        
	/* Total rest of coin */
       total = total - input[i];
 
       /* Increment solution coin */
       coin++;
      }
      
             
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
  int input[] = {25,10,5,1};
  
  /* greedy function implementation */  
  greedy(input);

  return 0;
}
