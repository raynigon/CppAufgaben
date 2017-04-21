#include "IntStack.h"



IntStack::IntStack()
{
}


IntStack::~IntStack()
{
}


void IntStack::push(int inNumber)
{
	stack.insert(stack.begin(), inNumber);
}


int IntStack::pop()
{
	if (stack.size() == 0)
		return -1;
	int ret = stack[0];
	stack.erase(stack.begin());
	return ret;
}
