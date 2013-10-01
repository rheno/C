#include<stdio.h>

int main(){

  //File to read
  FILE* file;

  //Buffer for the read string
  char buffer[1000];
 
  //Number from char 
  int x;
 
  //Open text files
  file = fopen("test.txt","r");
  
  //Out of file not exist
  if(!file)
    return 1;
 
  while(fgets(buffer,1000,file)!=NULL)
    
    //Read file per line
    
    //character to integer
    //x = buffer[0] - '0';
    printf("%s",buffer);

  //Close Files
  fclose(file); 
  
  return 0;
}

