#include <iostream>
#include <functional>

using namespace std;

int main()
{
	int i_a = 1;
	int i_b = 50;
	int z = 123;

	auto add3 = [](double a, double b, double c){return (a + b + c); };
	auto checkInterval = [=](double x){return (x >= i_a && x <= i_b); };
	auto multMinusOne = [&]()
	{
		int mask = ~z;
		z = mask+1;
	};

	cout << "12 + 24 + 46 = ";
	double dout = add3(12, 24, 46);
	cout << dout << endl;
	cout << i_a << "<=" << 12 << "<=" << i_b << " = ";
	bool bout = checkInterval(12);
	cout << bout << endl;
	cout << "-1*" << z << " = ";
	multMinusOne();
	cout << z << endl;
	system("pause");
}