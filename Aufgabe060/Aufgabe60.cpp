#include "FifoQueque.h"

using namespace std;

class MyObj {
	int x;
public:
	MyObj(int a) : x(a){};
	friend ostream& operator<< (ostream& os, MyObj obj)
	{
		os << obj.x;
		return os;
	}
};

int main() 
{
	FifoQueque<int> fq = {1,2,3,4,5,6,7,8,9};
	FifoQueque<MyObj> fq1 = {MyObj(1),MyObj(2), MyObj(3), MyObj(4), MyObj(5)};

	cout << fq << endl;
	cout << fq1 << endl;

	system("pause");
}