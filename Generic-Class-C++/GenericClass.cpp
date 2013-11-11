#include<iostream>
using namespace std;

template<class T>class Generic{
  
  public: 
  Generic(T px);
  ~Generic();
  Generic(const Generic&G);
  Generic&operator=(const Generic&G); 
  void setX(T px);
  T getX(); 
 
  private:
  T x;

};


//Constructor
template<class T>Generic<T>::Generic(T px){
  x = px;
}

//Destructor
template<class T>Generic<T>::~Generic(){
  cout<<"Destructor"<<endl;
} 

//Copy Constructor
template<class T>Generic<T>::Generic(const Generic&G){
  x = G.x;
}

//Operator Assignment
template<class T>Generic<T> &Generic<T>::operator=(const Generic&G){
  x = G.x;
  return *this;
}

//Setter X
template<class T> void Generic<T>::setX(T px){
  x = px;
}

//Getter X
template<class T> T Generic<T>::getX(){
  return this->x;
}


//Implementation
int main(){
  Generic<int> p(2);
  
  cout<<"x = "<<p.getX()<<endl;
  
  p.setX(3);
  
  cout<<"x = "<<p.getX()<<endl;

  Generic<float> q(2.3);
  cout<<"x = "<<q.getX()<<endl; 

  Generic<int> *r = new Generic<int>(20);
  cout<<"x = "<<r->getX()<<endl;
 

  return 0;
}
