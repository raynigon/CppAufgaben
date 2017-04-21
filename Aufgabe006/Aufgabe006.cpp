// Aufgabe006.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <stdlib.h>

using namespace std;

typedef int(*potenz) (int b, size_t n);

int potenzIterative(int b, size_t n)
{
	if (n == 0)
		return 1;
	int res = b;
	for (size_t i = 0; i < n; i++)
		res *= b;
	return res;
}

int potenzRecursiv(int b, size_t n)
{
	if (n == 0)
		return 1;

	return b*potenzRecursiv(b, --n);
}

int main()
{
	size_t methodIndex = 0;
	potenz methods[] = {potenzRecursiv, potenzIterative};

	int b;
	size_t n;

	cout << "Please Select calculating method:" << endl;
	cout << 0 << "\tRecursiv" << endl;
	cout << 1 << "\tIterative" << endl;
	cin >> methodIndex;

	cout << endl << "Insert 'b':" << endl;
	cin >> b;

	cout << endl << "Insert 'n':" << endl;
	cin >> n;

	cout << "Result:";
	cout << methods[methodIndex](b, n) << endl;
    return 0;
}

