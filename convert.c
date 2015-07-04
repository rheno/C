#include <stdio.h>
#include <stdlib.h>

int main(){
   
  int number;
  char string[100];

  scanf("%d",&number);
  
  /* convert to string */
  sprintf(string,"%d",number);
 
  /* result */
  printf("%s",string); 
   
  printf("\n");

  /* convert to int */
  printf("%d",atoi(string)); 


  return 0;
}

