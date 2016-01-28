#include <iostream>

using namespace std;

string decimal_to_bit(int N){

  string s;

  while(N > 0){
     
     if(N%2 == 0){
        s.insert(s.begin(), '0');
     }
    if(N%2 != 0){
        s.insert(s.begin(), '1');
    }
   
    N = N / 2;
  }
 
  return s;
}

int main(){
  cout<<decimal_to_bit(12)<<endl;
  return 0;
}
