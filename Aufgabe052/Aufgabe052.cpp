#include <iostream>
#include <unordered_map>

using namespace std;

int fak(int n)
{
	static unordered_map<int, int> results;
	if (results[n] != 0)
		return results[n];
	else if (n > 0)
		return n*fak(n - 1);
	else
		return 1;
}

int main()
{
	int n = 0;
	do {
		cout << "Fakultaet von:";
		cin >> n;
		cout << endl << "fak("<<n<<") = "<< fak(n) << endl;
	} while (n != 0);
}
