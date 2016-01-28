#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main(){

  char s[400000];
  char *result;
  vector<string> v;
  cin.getline(s, 400000); 
  result = strtok(s," ![,?._'@+]\\");
  while(result != NULL){
     string ss(result);
     v.push_back(ss);	
     result = strtok(NULL," ![,?._'@+]\\");
  }
  
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++){
	cout<<v[i]<<endl;
  }
   
  return 0;
}
