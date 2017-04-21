#include "IntStack.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
	IntStack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.push(6);
	cout << "LastElement:" << stack.pop()<< endl;

	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;
}