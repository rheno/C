//Standard C Library
 #include<stdio.h>

//boolean.h
#ifndef boolean_H
#define boolean_H
#define true 1
#define false 0
#define boolean unsigned char
#endif

//Stack Structure
typedef struct{
int tab[32];
int top;
}Stack;

//Make Stack Procedure 
void initBinary(Stack *S)
{
  S->top = 0;
}

//Add Value to Stack
void Push(Stack *S, int x)
{
  S->top++;
  S->tab[S->top] = x;
}

//Remove Value from Stack
void Pop(Stack *S)
{
  --S->top;
}

//View Binary that store in The Stack
void ViewBinary(Stack S)
{
  while(S.top>0)
  {
    printf("%d",S.tab[S.top]);
    Pop(&S);
  }
}

//Convert Decimal to Binary (1 or 0) one by One
void BinaryConverter(Stack *S, int x)
{
  int i;
  int sum,sum2;
  Push(S,(x%2));
  sum2 = (int)(x/2);
  
  for(i=0;i<7;i++)
  {   
    sum = (int)(sum2 % 2);
    Push(S, sum);
    sum2 = (int)(sum2/2);
  }
}

//Main Program
int main(int argc, char *argv[])
{
  Stack S;
  if(argv[1]==NULL)
  {
   printf("Usage ./biner [Value]\n");
   
  }else if((atoi(argv[1])<0)||(atoi(argv[1])>255)){
   printf("The Number is only for 8 bit");
  }
  else{
  initBinary(&S);
  
  BinaryConverter(&S, atoi(argv[1]));
  ViewBinary(S);} 
  return 0;
}

