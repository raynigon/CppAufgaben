#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

void analyzeLine(string& line, int* chars) 
{
	const char* start = line.data();

	for (size_t i = 0; i < line.length(); ++i) 
		chars[(size_t) start[i]]++;
}

void printResult(ostream& os, int* chars, char* delimiter)
{
	for (size_t i = 0; i < 256; ++i)
	{
		if (chars[i] == 0)
			continue;

		os << (char)i << delimiter;
		os << i << delimiter;
		os << chars[i] << endl;
	}
}

int main()
{
	ifstream fis("mySampleFile.txt");
	ofstream fos("analysedOutput.txt");
	int characters[256];

	for (size_t i = 0; i < 256; ++i)
		characters[i] = 0;

	string line;
	while (!fis.eof())
	{
		getline(fis, line);
		analyzeLine(line, characters);
	}

	printResult(fos, characters, ";");
	printResult(cout, characters, "\t");

	fis.close();
	fos.close();

	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;
}