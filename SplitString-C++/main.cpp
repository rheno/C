#include"SplitString.h"
#include<iostream>

using namespace std;

int main(){
  SplitString s("This is The String");
  vector<string> result = s.split();
  
  for(int i=0;i<result.size();i++){
    cout<<i+1<<". "<<result[i]<<endl;
  }
  
  cout<<"======================"<<endl;
  cout<<"size = "<<result.size()<<endl;
  return 0;
}
