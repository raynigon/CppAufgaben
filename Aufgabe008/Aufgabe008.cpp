#include <iostream>
#include <stdlib.h>

using namespace std;

typedef size_t(*fibonacci)(size_t number);

size_t resursiveFib(size_t number)
{
	if (number == 0)
		return 0;
	if (number == 1)
		return 1;

	return resursiveFib(number - 1) + resursiveFib(number - 2);
}

size_t whileFib(size_t number)
{
	if (number == 0 || number == 1)
		return number;

	size_t ret;
	size_t h1 = 0;
	size_t h2 = 1;

	size_t i = 1;
	while (i < number)
	{
		ret = h1 + h2;
		h1 = h2;
		h2 = ret;
		++i;
	}
	return ret;
}

size_t doWhileFib(size_t number)
{
	if (number == 0 || number == 1)
		return number;

	size_t ret;
	size_t h1 = 0;
	size_t h2 = 1;

	size_t i = 1;
	do 
	{
		ret = h1 + h2;
		h1 = h2;
		h2 = ret;
		++i;
	} while (i < number);
	return ret;
}

size_t forFib(size_t number)
{
	if (number == 0 || number == 1)
		return number;

	size_t ret;
	size_t h1 = 0;
	size_t h2 = 1;

	for (size_t i = 1; i < number; ++i)
	{
		ret = h1 + h2;
		h1 = h2;
		h2 = ret;
	}
	return ret;
}

int main() 
{
	char* names[] =		{"recur",		"while",	"doWhile",		"for" };
	fibonacci fibs[] =	{resursiveFib,	whileFib,	doWhileFib,		forFib};
	size_t fibNumber;
	cout << "Calculate Fibonacci from:" << endl;
	cin >> fibNumber;

	for (size_t i = 0; i < 4;++i){
		cout << names[i] << "\t" << "Fibonacci(" << fibNumber << ") = ";
		cout << fibs[i](fibNumber) << endl;
	}

	/*for (int i = 0; i < INT_MAX; i++)
		i++;*/
	return 0;
}