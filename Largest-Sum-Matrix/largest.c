#include<stdio.h>

/* row  */
#define M 3

/* column  */
#define N 3

/* define max value for two values */
#define max(x,y) x>y?x:y

/* algorithm */
int maxSum(int input[]){
  int i,j,curMax=input[0], maxVal = input[0];

  for(i=1;i<M*N;i++){

    if(input[i]>0){
      /* get curent max value */
        curMax = max(input[i], curMax+input[i]);

      /* probably solution for all */
        maxVal = max(maxVal,curMax); 
    }
  }
  return maxVal;
}


int main()
{
  /* input array  */
  int input[M][N];

  /* Make it one dimension array */
  int array[M*N]; 	
  
  int i,j,counter=0; 
 
  printf("input : \n");
  for(i=0;i<M;i++){
    for(j=0;j<N;j++){
      printf("row-%d, column-%d = ",i+1,j+1);
      scanf("%d",&input[i][j]);
      array[counter] = input[i][j];
      counter++;
    }
  }
  
  printf("\nShow Array : \n");
  for(i=0;i<M;i++){
    printf("\n");
    for(j=0;j<N;j++){
      printf(" %d",input[i][j]);
    }
  }  
  
  printf("\nLargest Sum : %d\n",maxSum(array));  
  return 0;
}
