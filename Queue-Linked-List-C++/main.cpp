#include "queue.hpp"

int main()
{

	Queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);

	while(!q.empty())
	{
		cout << q.pop() << endl;
	}
	
	return 0;
}
