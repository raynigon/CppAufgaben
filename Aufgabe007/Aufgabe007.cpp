// Aufgabe007.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	size_t maxNumber;
	cout << "MaxNumber for Prime Search:" << endl;
	cin >> maxNumber;

	for (size_t i = 2; i < maxNumber; ++i)
	{
		bool isPrime = true;
		for (size_t j = 2; j < i; ++j)
		{
			if (i%j == 0){
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			cout << i << endl;
	}
    return 0;
}

