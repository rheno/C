/* Standard Library from GNU C */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
  char **s;   //declare variable of string                   
  s =  (char**) malloc (2);  //allocating array of two string 
  s[0] = (char*) malloc (100); //allocating first index (0) of string
  s[1] = (char*) malloc (100); //allocating second index of string
  

  strcpy(s[0],"memory");  //assign first index of string
  strcpy(s[1],"allocation");  //assign second index of string
  /* view all index of string */
  printf("index[0] = %s",s[0]);
  printf("\nindex[1] = %s",s[1]);
  free(s[0]);
  free(s[1]);
  free(s);
  return 0;
}
