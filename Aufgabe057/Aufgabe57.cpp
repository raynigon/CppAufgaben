#include "Bruch.h"
#include <iostream>

using namespace std;

class Number 
{
private:
	int n;
public:
	Number(int inN): n(inN) {};
	friend ostream& operator<< (ostream& os, const Number& num) 
	{
		os << num.n;
		return os;
	};
	friend bool operator== (const Number& num, int n)
	{
		return num.n==n;
	};
};

int main()
{
	Bruch<int> b(1,2);
	cout << b << endl;

	Bruch<double> d(0.1, 3.2);
	cout << d << endl;

	Bruch<Number> c(Number(3), Number(4));
	c.setNenner(Number(5));
	cout << c << endl;



	system("pause");
}