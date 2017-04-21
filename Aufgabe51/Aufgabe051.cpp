#include <iostream>
#include <cstdlib>
#include <thread>
#include <string>
#include <unordered_map>
#include <cmath>

using namespace std;

long fibNormal(long a)
{
	if (a <= 1)
		return 0;
	if (a <= 2)
		return 1;
	return fibNormal(a - 1) + fibNormal(a - 2);
}


long intFibOpt(long i, bool reset = false)
{
	static int first = 0;
	static int second = 1;
	if (reset)
	{
		first = 0;
		second = 1;
		return -1;
	}
	int out = first + second;
	first = second;
	second = out;
	if (i == 3)
		return out;
	else if (i < 2)
		return 1;
	else if (i == 2)
		return 1;

	return intFibOpt(--i);
}

long fibOptimized(long i)
{
	static unordered_map<long, long> map;
	long fn = map[i];
	if (0 != fn) return fn;
	intFibOpt(0, true);
	return (map[i] = intFibOpt(i));

}

long getNumber(long n)
{
	switch (n)
	{
	case 0:
		return 0;
	case 1:
		return 1;
	case 2:
		return 1;
	case 3:
		return 2;
	case 4:
		return 3;
	case 6:
		return 8;
	case 7:
		return 13;
	case 8:
		return 21;
	case 9:
		return 34;
	case 10:
		return 55;
	case 11:
		return 89;
	case 12:
		return 144;
	case 13:
		return 233;
	case 14:
		return 377;
	case 15:
		return 610;
	default:
		return -1;
	}
}

long fib_simon(long n)
{
	static unordered_map<long, long> map;
	long fn = map[n];
	if (fn != 0) {
		fn = getNumber(n);
		if(n==-1)
			fn = fib_simon(n - 1) + fib_simon(n - 2);
		map[n] = fn;
	}
	return fn;
}


long fib_static_alex(long n)
{
	static unordered_map<long, long> map;
	//cout << "call " << n << ", f " << map[n] << endl;

	if (-1 == n) { cout << "test" << endl; map.clear(); return 0; }

	long fn = map[n];
	if (0 != fn) return fn;
	return (map[n] = ((n<2) ? n : fib_static_alex(n - 1) + fib_static_alex(n - 2)));
}


long fibFormel(long n)
{
	double sr5 = sqrt(5);
	return (long) ((1 / sr5)*(pow((1 + sr5) / 2, n) - pow((1 - sr5) / 2, n)));
}


long value = 4300;
typedef long(*FibFunction)(long);
void measure(FibFunction fib, const char* name);

void main()
{
	//thread t1(measure, fibNormal, "Normal");
	thread t1(measure, fibFormel, "Formel Fct");
	thread t2(measure, fibOptimized, "Optimized");
	thread t3(measure, fib_static_alex, "Alex Fib");
	thread t4(measure, fib_simon, "Simon Fib");
	t1.join();
	t2.join();
	t3.join();
	t4.join();

	system("pause");
}

void runCalculationRound(FibFunction fib)
{

	for (long i = 0; i < value; ++i)
		fib(i);

	for (long i = value; 0>i; --i)
		fib(i);

}

void measure(FibFunction fib, const char* name)
{
	auto t1 = std::chrono::high_resolution_clock::now();
	
	for (size_t i = 0; i < 100000; ++i)
		runCalculationRound(fib);

	auto t2 = std::chrono::high_resolution_clock::now();
	__int64 duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count();
	cout << name << ":\t" << duration << endl;
}


