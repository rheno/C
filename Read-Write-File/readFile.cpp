#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
  
  //for read line of string
  string line;
  
  //for open the text files
  ifstream myfile("test.txt");
  
  //buffer string
  const char* buffer;
   
  cout<<"Read File :"<<endl;
  
  //start to open file
  if(myfile.is_open())
  {
    //Read all file per line
    while(getline(myfile,line))
    {
      //Read file by line
      buffer = line.c_str();
      
      //Change first character in line to integer 
      int x = buffer[0]-'0';

      //Print in screen
      cout<<x<<endl;
    }
    
    //Close file
    myfile.close();

  }else{
    cout<<"unable to open file"<<endl;
  }
  
  return 0;
}
