#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

string reverseString(string& input)
{
	size_t length = input.length();
	const char* start = input.data();
	char* newText = new char[length+1];

	for (size_t i = 0; i<length; ++i)
		newText[i] = start[length-1-i];
	newText[length] = '\0';

	return string(newText);
}

int main() 
{
	string text;
	cout << "Text eingeben:";
	cin >> text;
	cout << reverseString(text);

	for (int i = 0; i < INT_MAX; ++i)
		i++;
}