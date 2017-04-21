#include <iostream>
#include <functional>

using namespace std;


double netwonEval(function<double(double)> fx, function<double(double)> f_x, int iter)
{
	double x = 25.0;
	for (int i = 0; i < iter; ++i) 
		x = x - (fx(x) / f_x(x));
	return x;
}

int main()
{
	auto fx = [](double x) {return 2*x*x + 2 * x - 12; };
	auto f_x = [](double x) {return 4 * x + 2; };

	cout << netwonEval(fx, f_x, 100) << endl;

	system("pause");
}