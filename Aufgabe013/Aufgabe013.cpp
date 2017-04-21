#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void split(string& text)
{
	for (char& c : text)
	{
		if (c == '_') 
		{
			cout << endl;
			continue;
		}
		cout << c;
	}
}

int main() 
{
	string text;
	cout << "Bitte Text eingeben:";
	cin >> text;
	split(text);
}