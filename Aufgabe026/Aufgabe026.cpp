#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void reverseField(string* field, int length)
{
	for (size_t i = 0; i<length; ++i)
		cout << field[length-i-1] << " ";
	cout << endl;
}

int main()
{
	string s0 = "Dies";
	string s1 = "ist";
	string s2 = "ein";
	string s3 = "Satz";
	string* field = new string[4];
	field[0] = s0;
	field[1] = s1;
	field[2] = s2;
	field[3] = s3;
	reverseField(field, 4);

	delete[] field;
	for (int i = 0; i < INT_MAX; i++)
		++i;

}