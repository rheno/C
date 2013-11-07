#include"Class1.h"
#include<iostream>

using namespace std;

int main(){
  
  Class1 c1(2);
  cout<<"x = "<<c1.getValue()<<endl;
  
  //Copy Constructor
  Class1 c2 = c1;
  cout<<"x in Copy Constructor = "<<c2.getValue()<<endl; 
 
  c2.setValue(20);
  
  //Operator Assignment
  Class1 c3(1);
  c3 = c2;
  cout<<"x in operator assignment = "<<c3.getValue()<<endl;

  //Class in pointer
  Class1* c4 = new Class1(100);
  cout<<"x in pointer = "<<c4->getValue()<<endl;

  return 0;
}
