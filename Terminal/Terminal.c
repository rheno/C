/**********************************
Program : Terminal Command Line
Author : s3tanc0d3r
email : s3tanc0d3r@gmail.com

***********************************/

//Standard Library From GNU C
#include<stdio.h>
#include<stdlib.h>


//boolean.h
#ifndef boolean_H
#define boolean_H
#define true 1
#define false 0
#define boolean unsigned char
#endif



//Count length of a String
int lengthString(char* str)
{
  int counter=0;
 
  while(str[counter]!='\0')
  {
    counter++;
  }
  return counter;
}



//Check Two String, same or not
boolean IsSame(char *str1, char *str2)
{
  int counter=0;
  boolean mark = true;
 
  if(lengthString(str1)!=lengthString(str2))
  {
    return false;
  }else
  while(counter<lengthString(str1))
  {
    if(str1[counter] != str2[counter])
    {
      mark = false;
    }
    counter++;
  }
  return mark;
}


//Procedure to Get Input Command

void Terminal()
{
    //input from user
  char *input;
  
  //each character from keyboard 
  char CC;
 
  //counter the input 
  int counter=0;
  
  //Looping Forever
  while(true)
  {
  //Reset The input counter, The input is NULL String
  counter=0;
  //Allocation the Input
  input = (char*) malloc (100*sizeof(char));
    
    //Get input from user until pressing 'enter'
    while((CC = getchar()) != '\n')
    {
      input[counter] = CC;   
      counter++;       
    }
  
    //Check the input, if 'exit' the program will terminate
    if(IsSame(input,"exit"))
    {
      break;
    }
  
    printf("\nYour input : %s\n",input);
    //Bck 
    input[0] = '\0';
  }
 

}

//Main Program
int main()
{
  Terminal();
  return 0;
}
