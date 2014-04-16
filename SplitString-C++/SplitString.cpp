#include"SplitString.h"


using namespace std;

SplitString::SplitString(string strings){
  setSplitString(strings);
}

SplitString::~SplitString(){

}

SplitString::SplitString(const SplitString&S){
  inputString = S.inputString;
  
}

SplitString &SplitString::operator=(const SplitString&S){
  inputString = S.inputString;
  return *this;
}

void SplitString::setSplitString(string input){
  inputString = input;  
}

string SplitString::getSplitString(){
  return inputString;
}

vector<string> SplitString::split(){

  vector<string> temp;

  char* dat = &getSplitString()[0];  

  char *s = strtok(dat, " ");

  while(s!=NULL){
  
    temp.push_back((string)s);

    s = strtok(NULL," ");
  }

  return temp;
}
