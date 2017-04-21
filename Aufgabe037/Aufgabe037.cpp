#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;


int main()
{
	vector<string> text = {"Simon", "ist", "hammer"};

	string tmp;
	cout << "Bitte geben sie ein Wort ein:";
	cin >> tmp;
	text.push_back(tmp);
	
	vector<string> reversed;
	for (size_t i = 0; i<text.size(); ++i)
		reversed.push_back(text[text.size()-i-1]);

	for (string word : reversed)
		cout << word << " ";
	cout << endl;

	text.clear();

	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;
}