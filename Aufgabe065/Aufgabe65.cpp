#include <thread>
#include <iostream>
#include <mutex>

using namespace std;

void safeAdd(int start, int stop, long* var, mutex* m)
{
	for (int i = start; i < stop; ++i) {
		lock_guard<mutex> lock((*m));
		(*var)++;
	}
}

int main()
{
	long gval = 0;
	mutex myMutex;
	thread t1(safeAdd,    0, 1000, &gval, &myMutex);
	thread t2(safeAdd, 1000, 2000, &gval, &myMutex);
	thread t3(safeAdd, 2000, 3000, &gval, &myMutex);
	thread t4(safeAdd, 3000, 4000, &gval, &myMutex);
	
	
	system("pause");
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	cout << gval;
}