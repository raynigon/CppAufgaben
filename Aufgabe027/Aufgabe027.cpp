#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	float a = 2.4;
	const float b = 2.5;
	float* fptr = &a;
	const float* cfptr = &a;
	float* const fcptr = &a;

	//float* bfptr = &b;//Geht nicht
	const float* bcfptr = &b;
	//float* const bfcptr = &b;//geht nicht

	(*fptr) = 4.2;
	//(*cfptr) = 4.2;//Geht nicht
	(*fcptr) = 4.2;

	//(*fptr) = 4.2;
	//(*bcfptr) = 4.2;//Geht nicht
	//(*fcptr) = 4.2;


	for (int i = 0; i < INT_MAX; i++)
		++i;

}