#include <iostream>

using namespace std;

template<int a, int b>
class A {
public:
	enum { v = a*A<a, b - 1>::v };
};

template<int a>
class A<a, 0> {
public:
	enum { v = 1 };
};

int main() 
{
	cout << A<5, 99>::v << endl;
	system("pause");
}