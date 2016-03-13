#ifndef __hashtable__H
#define __hashtable__H

#include <iostream>

using namespace std;

const int TABLE_SIZE = 128;

class hashentry{

public :

hashentry(int key, int value){
  this->key = key;
  this->value = value;
}

int getKey(){
  return key;
}

int getValue(){
  return value;
}

private :

int key;

int value;

};

class hashtable{

public :

hashtable();

~hashtable();

void put(int key, int value);

int get(int key);

bool find(int value);

private :

hashentry** table;

};

#endif
