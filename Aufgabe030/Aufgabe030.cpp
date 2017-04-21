#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

void doSomething()
{
	cout << "I have done something" << endl;
	for (int i = 0; i < INT_MAX; i++)
		++i;
}

int main()
{
	atexit(doSomething);
	cout << "hello" << endl;
	//throw 123;

}
