#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

double eval(function<double(double)> f, double x)
{
	return f(x);
}

int main()
{
	auto fx2 = [](double x) {return x*x; };
	auto sinus = [](double x) {return sin(x); };

	double x = 24.3;

	cout << "f(x)=x^2 an f(" << x << ") = " << eval(fx2, x) << endl;
	cout << "f(x)=sin(x) an f(" << x << ") = " << eval(sinus, x) << endl;

	system("pause");

}