#pragma once
#include <vector>

using std::vector;

class IntStack
{
public:
	IntStack();
	~IntStack();
	IntStack(const IntStack& inStack);
	IntStack& operator= (const IntStack& inStack);
	void push(int inNumber);
	int pop();
private:
	int* stack;
	size_t size;
};

