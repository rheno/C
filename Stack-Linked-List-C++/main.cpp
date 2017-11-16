#include "stack.hpp"

int main()
{
	Stack<int> s;
	
	s.push(3);
	s.push(2);
	s.push(1);

	while(!s.empty())
	{
		cout << s.pop() << endl;
	}
	
	return 0;
}
