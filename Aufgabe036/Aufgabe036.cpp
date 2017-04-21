#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;


int main()
{
	vector<int> vec;
	int num = 0;
	do {
		cout << "Please inser a number(-1 to end):";
		cin >> num;
		cin.clear();
		vec.push_back(num);
		cout << "Insert Number;" << num << endl;
	} while (num != -1);

	cout << "Vector Content:" << endl;

	for (size_t i = 0; i < vec.size();++i)
		cout << i << "\t" << vec[i] << endl;

	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;
}