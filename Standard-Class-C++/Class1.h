#ifndef Class1__H
#define Class1__H

class Class1{
 
 private:
 
   //Value Declaration
   int value;
 
 public :
 
   //Constructor  
   Class1(int val);

   //Destructor
   ~Class1();

   //Copy Contructor
   Class1(const Class1&C);
  
   //Operator Assignment
   Class1&operator=(const Class1&C);

   //Setter value
   void setValue(int val);

   //Getter value
   int getValue();    
};


#endif
