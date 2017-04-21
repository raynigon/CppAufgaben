#include <thread>
#include <mutex>
#include <algorithm>
#include <functional>
#include <cmath>
#include <iostream>
#include <time.h>

using namespace std;

struct SumData {
	double* sum;
	mutex* mutex;
};

double calcTrp(double a, double b, double width)
{
	double l = min(a, b);
	double h = max(a, b);
	return (l*width)+(0.5*(h-l)*width);
}

void integral(function<double (double)> fct, double start, double stop, int steps, SumData sd)
{
	double x = start;
	double width = abs(stop - start)/steps;
	for (int i = 0; i < steps; ++i)
	{
		//lock_guard<mutex> lg(*(sd.mutex));
		x = start+width*i;
		(*sd.sum) += calcTrp(fct(x), fct(x+width), width);
	}
}

int main() 
{
	auto time = clock();
	double sum = 0.0;
	SumData sd;
	sd.mutex = new mutex();
	sd.sum = &sum;

	auto fct = [](double x) {return 1.0/x; };
	//auto fct = [](double x) {return abs(sin(x)); };

	thread t1(integral, fct, 1.0, 2.0, 1000000000, sd);
	//thread t2(integral, fct, 1.25, 1.5,	25000000, sd);
	//thread t3(integral, fct, 1.5, 1.75, 25000000, sd);
	//thread t4(integral, fct, 1.75, 2.0, 25000000, sd);

	t1.join();
	//t2.join();
	//t3.join();
	//t4.join();
	cout << clock() - time << "ms" << endl;
	cout << sum << endl;
	system("pause");
	delete sd.mutex;
}