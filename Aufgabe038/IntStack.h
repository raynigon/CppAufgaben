#pragma once
#include <vector>

using std::vector;

class IntStack
{
public:
	IntStack();
	~IntStack();
	void push(int inNumber);
	int pop();
private:
	vector<int> stack;
};

