/********* Greedy Algorithm ******************/

/*  Created By rhenobudiasa@yahoo.com       **/   

/*  Solution for greedy minimum coin change **/

/*********************************************/ 


#include<stdio.h>

/* define how many input array */
#define N 4

/* define how many change will get (Goals) */ 
#define G 32


/* Greedy algorithm function */
void greedy(int input[]){
  int i,j,sum=G,coin=0;
   printf("[");
   for(i=0;i<N;i++){
      if(sum-input[i]>0){
	     sum-=input[i];
		 //Increment the sum of coin
	     coin++;
		 /* print the local solution */
		 printf("%d,",input[i]);
	  }
	  if(sum%input[i]==0){
	     
		  /* how many coin left to same as goals */
		 coin+=(sum/input[i]);
		 
		 /* print the rest of posibility global solution */
		 for(j=0;j<(sum/input[i]);j++){
		   printf("%d,",input[i]);
		 }
		 printf("] Solution = %d",coin);
	  }
      	
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
