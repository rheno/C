#include<stdio.h>

#define N 5

#define max(x,y) x>y?x:y

int largeSumArray(int input[]){
  int i, max=input[0], curr_max = input[0];
  for(i=1;i<N;i++){
    curr_max = max(input[i],curr_max+input[i]);
    max = max(max,curr_max);    
  }
  return max;
}

int main(){
   
  int input[] = {1,2,3,0,-6};
  printf("%d",largeSumArray(input));
  return 0;
}
