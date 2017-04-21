#include <thread>
#include <chrono>
#include <iostream>

using namespace std;

void sleep(int secs)
{
	chrono::seconds amount(secs);
	this_thread::sleep_for(amount);
	cout << "Thread " << secs << endl;
}

int main()
{
	thread t1(sleep, 1);
	thread t2(sleep, 2);
	thread t3(sleep, 3);
	t1.join();
	t2.join();
	t3.join();
}
