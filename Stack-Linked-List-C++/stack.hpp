#ifndef __stack__H
#define __stack__H

#include <iostream>

using namespace std;

template<class T>
class ListNode
{

public :
	
	T val;
	ListNode<T>* next;

	ListNode(T val)
	{
		this->val = val;
	}
};


template<class T>
class Stack{

public :
	
	Stack();

	~Stack();

	void push(T val);
	
	T pop();

	long size();

	bool empty();

	
	
private :

	ListNode<T>* top;
	long length;

};

template<class T>
Stack<T>::Stack()
{
	top = NULL;
	length = 0;
}

template<class T>
Stack<T>::~Stack()
{
	top = NULL;
	length = 0;
}

template<class T>
void Stack<T>::push(T val)
{
	ListNode<T>* newNode = new ListNode<T>(val);

	length++;
	
	if(top == NULL)
	{
		top = newNode;
		return;
	}

	newNode->next = top;
	top = newNode;
}

template<class T>
T Stack<T>::pop()
{

	T val = top->val;
	ListNode<T>* del = top;
	top = top->next;
	delete del;

	if(length != 0)
	{
		length--;
	}

	return val;
}

template<class T>
long Stack<T>::size()
{
	return length;
}

template<class T>
bool Stack<T>::empty()
{
	return length == 0 ? true : false;
}

#endif
