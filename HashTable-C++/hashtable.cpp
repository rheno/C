#include "hashtable.h"

hashtable::hashtable(){
   
   table = new hashentry*[TABLE_SIZE];
   
   for(int i=0;i<TABLE_SIZE;i++){
   	table[i] = NULL; 
   }
  
}

hashtable::~hashtable(){

  for(int i=0;i<TABLE_SIZE;i++){
	delete table[i];
  }

  delete[] table;
}


void hashtable::put(int key, int value){
  
  int hash = key % TABLE_SIZE;

  while(table[hash] != NULL && table[hash]->getKey() != key){
	hash = (hash + 1) % TABLE_SIZE;
  }

  if(table[hash] != NULL){
     delete table[hash];	
  }

  table[hash] = new hashentry(key, value);

}

int hashtable::get(int key){
  
  int hash =  key % TABLE_SIZE;
  
  while(table[hash] != NULL && table[hash]->getKey() != key){
	hash = (hash + 1) % TABLE_SIZE;
  }

  if(table[hash] == NULL){
	return -1;
  }

  return table[hash]->getValue();
}

bool hashtable::find(int value){
  
  int hash = 0;
 
  while(hash < TABLE_SIZE ){

        if(table[hash] != NULL && table[hash]->getValue() == value){
	   return true;
        }

 	hash++;
  }


  return false;
 
}
