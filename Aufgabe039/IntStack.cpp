#define _SCL_SECURE_NO_WARNINGS
#include "IntStack.h"
#include <stdlib.h>

using std::copy;

IntStack::IntStack()
{
	stack = new int[0];
}


IntStack::~IntStack()
{
	delete[] stack;
}

IntStack::IntStack(const IntStack& inStack) : size(inStack.size), stack(new int[size])
{
	copy(inStack.stack, (inStack.stack+size - 1), stack);
}


IntStack& IntStack::operator=(const IntStack& inStack)
{
	if (this == &inStack)
		return *this;
	size_t oldSize = size;
	size = inStack.size;
	delete[] stack;
	stack = new int[size];
	copy(inStack.stack, (inStack.stack+size - 1), stack);
	return *this;
}



void IntStack::push(int inNumber)
{
	size_t oldSize = size;
	++size;
	int* nstack = new int[size];
	nstack[0] = inNumber;
	if(oldSize>0)
		copy(stack, (stack+oldSize-1), (nstack+1));
	delete[] stack;
	stack = nstack;
}


int IntStack::pop()
{
	if (size == 0)
		return -1;

	int ret = stack[0];
	--size;
	int* nstack = new int[size];
	copy((stack+1), (stack+size), nstack);
	delete[] stack;
	stack = nstack;
	return ret;
}