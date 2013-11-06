/*  remove elements of array that duplicate  */

/*      rhenobudiasa@yahoo.com               */
#include<stdio.h>


void delElement(int input[], int index, int length){
  int i;
    
  for(i=index;i<length;i++){
      input[i] = input[i+1];
  }
}


void removeElmnt(int input[], int n){
  int i=0,j=0;
  
  while(i<n){
    j=i+1;    
    while(j<n){ 
    if(input[i] == input[j]){           
      delElement(input,j,n);
      n--;
    }
    j++;
    }
    i++;
  }
}

void showArray(int input[], int n){
  int i=0;
  while(i<n && input[i]!=0){
    printf("%d\n",input[i]);  
    i++;
  }
  
}

int main(){ 
  int input[] = {4,3,2,1,2,3,6};
  
  showArray(input,7);
  removeElmnt(input,7);
  printf("After remove : \n");
  showArray(input,7);
  
  
  
  return 0;
}
