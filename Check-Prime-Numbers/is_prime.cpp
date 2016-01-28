#include <iostream>
#include <cmath>

using namespace std;


bool is_prime(int N){

  if(N <= 1){
   return false;
  }else if(N == 2 || N == 3 || N == 5 || N == 7){
   return true;
  }else{
 
    int i=2;
    while(i <= sqrt(N)){
	//cout<<i<<endl;
	if(N % i == 0){
	 
	  return false;
	}
	i++;
    }
	
  }

  return true;
}


int main(){

  int N;

  cin>>N;

  cout<<is_prime(N)<<endl;
  

  return 0;
}
