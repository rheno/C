#ifndef __linkedlist__H
#define __linkedlist__H

#include <iostream>

using namespace std;

template<class T>
class ListNode
{

public :
	T val;
	ListNode* next;

	ListNode(T val)
	{	
		this->val = val;
		this->next = NULL;
	}

};

template<class T>
class LinkedList
{

public :
	
	LinkedList()
	{
		head = NULL;
	}
	
	void insertFirst(T val)
	{
		if(head == NULL)
		{
			head = new ListNode<T>(val);
			return;
		}
	
		ListNode<T>* newList = new ListNode<T>(val);
		newList->next = head;
		head = newList;
	}

	void insertAfter(ListNode<T>* after, T val)
	{
		if(head == NULL)
		{
			head = new ListNode<T>(val);
			return;
		}

		ListNode<T>* current = head;

		while(current != after && current->next != NULL)
		{
			current = current->next;
		}

		if(current->next == NULL)
		{
			current->next = new ListNode<T>(val);
		}else{
			ListNode<T>* next = current->next;
			current->next = new ListNode<T>(val);
			current->next->next = next;
		}

	}
	
	void insertLast(T val)
	{
		
		if(head == NULL)
		{
			head = new ListNode<T>(val);
			return;
		}

		ListNode<T>* current = head;

		while(current->next != NULL)
		{
			current = current->next;
		}

		current->next = new ListNode<T>(val);
	}

	void deleteFirst()
	{
		if(head == NULL)
		{
			return;
		}

		ListNode<T>* del = head;
		head = head->next;
		delete del;
	}

	void deleteAfter(ListNode<T>* after)
	{
		if(head == NULL)
		{
			return;
		}

		ListNode<T>* current = head;

		while(current != NULL && current != after)
		{
			current = current->next;
		}

		if(current == NULL) return;
	
		if(current->next != NULL)
		{
			ListNode<T>* del = current->next;
			current->next = current->next->next;
			delete del;
		}

	}

	void deleteLast()
	{
		if(head == NULL) return;

		ListNode<T>* current = head;

		while(current->next != NULL && current->next->next != NULL)
		{
			current = current->next;
		}
		
		if(current->next == NULL)
		{
			current = NULL;
		}else{
			ListNode<T>* del = current->next;
			current->next = current->next->next;
			delete del;
		}

		

		
	}

	ListNode<T>* getHead()
	{
		return head;
	}

	void printList()
	{

		ListNode<T>* current = head;

		while(current != NULL)
		{		
			cout << current->val << endl;
			current = current->next;
		}

	}

private :
	
	ListNode<T>* head;
};

#endif
