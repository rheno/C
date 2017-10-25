#include <iostream>
#include <climits>

using namespace std;

const int MAX_HEAP_SIZE = INT_MAX;

/* Heap Data Structure */
class Heap
{

public :
	Heap()
	{
		array = new int[MAX_HEAP_SIZE];				
		size = 0;
	}

	~Heap()
	{
		delete array;
	}

	int getLeft(int index)
	{
		return (2 * index) + 1;
	}

	int getRight(int index)
	{
		return (2 * index) + 2;
	}

	int parent(int index)
	{
		return (index - 1) / 2;
	}

	void heapify(int index)
	{
		
		int left = getLeft(index);
		int right = getRight(index);
		int smallest = index;

		if(left < size && array[left] <= array[index])
		{
			smallest = left;
		}

		if(right < size && array[right] <= array[smallest])
		{
			smallest = right;
		}

		if(smallest != index)
		{
			swap(array[index], array[smallest]);
			heapify(smallest);
		}
		
	}

	
	void push(int value)
	{
		if(size == MAX_HEAP_SIZE)
		{
			cout << "Maximum Heap Size" << endl;
			return;
		}

		array[size] = value;
		int index = size;
		size++;
		

		while(index != 0 && array[index] <= array[parent(index)])
		{
			swap(array[index], array[parent(index)]);
			index = parent(index);
		}
	}

	int pop()
	{
		if(size <= 0)
		{
			return MAX_HEAP_SIZE;
		}

		if(size == 1)
		{
			size--;
			return array[0];
		}

		int root = array[0];
		array[0] = array[size - 1];
		size--;
		heapify(0);

		return root;

	}

	

private :

	int* array;
	int size;

};


class PriorityQueue
{

public :

   PriorityQueue()
   {
	/* Contructor */
	heap = new Heap;
   }
   
   ~PriorityQueue()
   {
	/* Destructor */
	delete heap;
   }

   void push(int value)
   {
	heap->push(value);
   }      

   int pop()
   {
	return heap->pop();
   }


private :
   
   Heap *heap;
   

};

int main()
{

  PriorityQueue* pq = new PriorityQueue;
  
  pq->push(7);
  pq->push(3);
  pq->push(10);
  pq->push(1);

   

  cout << pq->pop() << endl;
  cout << pq->pop() << endl;
  cout << pq->pop() << endl;
  cout << pq->pop() << endl;


  delete pq;   

  return 0;
}
