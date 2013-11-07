#include"Class1.h"
#include<iostream>

using namespace std;


//Constructor
Class1::Class1(int val){
  value = val;
}


//Destructor
Class1::~Class1(){
  cout<<"Destructor"<<endl;
}

//Copy Constructor
Class1::Class1(const Class1&C){
  value = C.value;
}


//Operator Assignment
Class1& Class1::operator=(const Class1&C){
  value = C.value;
  return *this;
}

//Set Value
void Class1::setValue(int val){
  value = val;
}

//Get Value
int Class1::getValue(){
  return this->value;
}



