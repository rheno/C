/****************  Simple String Pattern Matching in C **********************/
/****************  Crated by : rheno.b  **********************/
#include<stdio.h>

int getSameString(char input1[], char input2[], int a, int b)
{
  int i=0, diff=1;
	 while(a<=b){
     if(input1[a]!=input2[i]){
	   diff = 0;
	 }
	 a++;
	 i++;
   }
  return diff;
}
int lengthString(char input[]){
  int i=0;
  while(input[i]!='\0'){
    i++;
  }
  return i;
}

void existString(char input1[], char input2[]){
  int i,j,same=0;
  for(i=0;i<(lengthString(input1)-(lengthString(input2)))+1;i++){
    if(getSameString(input1,input2,i,(i+lengthString(input2))-1) == 1){
	  same = 1;
	}
  }
  if(same==1){
    printf("exist");
  }else{
    printf("not exist");
  }
}


int main(){
  existString("rheno ganteng banget","ganteng");
  return 0;
}