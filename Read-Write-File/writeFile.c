#include<stdio.h>

int main(){
  
  //File to Open
  FILE *file;

  //Counter for writing to file
  int counter;

  //open file
  file = fopen("result.txt","w"); 
  
  //Exit when unable open the file
  if(!file){
    return 1;
  }

  //Write file per line
  for(counter=0;counter<10;counter++){
    fprintf(file,"%d\n",counter);
  }
  
  //close the file
  fclose(file);


  return 0;
}
