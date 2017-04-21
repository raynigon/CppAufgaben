#include "FifoQueque.h"



FifoQueque::FifoQueque()
{
}

FifoQueque::FifoQueque(initializer_list<int> list)
{
	const int* it = std::end(list);
	do {
		--it;
		vec.push_back(*it);
	} while (it != std::begin(list));
}


FifoQueque::~FifoQueque()
{
}
