#ifndef __queue__H
#define __queue__H

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
		next = NULL;
	}
};

template<class T>
class Queue
{

public :
	
	Queue();
	~Queue();
	void push(T val);
	T pop();
	T front();
	T back();
	long size();
	bool empty();
	

private :
	
	long length;
	ListNode<T>* head;
	ListNode<T>* tail;
};



template<class T>
Queue<T>::Queue()
{
	/* Constructor */
	head = NULL;	
	tail = NULL;
	length = 0;	
}

template<class T>
Queue<T>::~Queue()
{
        /* destructor */
	head = NULL;
	tail = NULL;
	length = 0;
}

template<class T>
void Queue<T>::push(T val)
{

	length++;

	if(head == NULL && tail == NULL)
	{
		head = tail = new ListNode<T>(val);
		return;
	}

	ListNode<T>* newNode = new ListNode<T>(val);
	tail->next = newNode;
	tail = newNode;

}

template<class T>
T Queue<T>::pop()
{
	T val;
	try
	{
		if(head == NULL && tail == NULL)
		{
			throw(head);
		} 

		val = head->val;

		length--;

		ListNode<T>* del = head;
		head = head->next;
		delete del;

	}
	catch(ListNode<T>* h) 
	{ 
		cout << "Empty Queue" << endl;
	}

	return val;
}

template<class T>
T Queue<T>::front()
{
	return head->val;
}


template<class T>
T Queue<T>::back()
{
	return tail->val;
}

template<class T>
long Queue<T>::size()
{
	return length;
}

template<class T>
bool Queue<T>::empty()
{
	return length == 0 ? true : false;
}

#endif
