/* Dynamic Programming  */
/* Longest Increasing Subsequence Solution */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lis(char s[], int n){
 
   int i,j, ans;
   int lis[n+1];
   
   for(i=0;i < n;i++){
      lis[i] = 1;
   }

   for(i = 1;i < n; i++){
     for(j = 0;j < i; j++){
	if(s[i] > s[j] && lis[i] < lis[j] + 1){
	  lis[i] = lis[j] + 1;
        }
     }
   } 

   ans = 0;
   for(i=0;i < n;i++){
      if(ans < lis[i]){
	ans = lis[i];
      }
   }
   
   return ans;
}

int main(){
 
   char s[] = "abcude";
   int n;
   n = strlen(s);   
   printf("lis = %d\n",lis(s, n));
   return 0;
}
