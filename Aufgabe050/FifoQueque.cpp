#include "FifoQueque.h"
#include "FifoIterator.h"


FifoQueque::FifoQueque()
{
}

FifoQueque::FifoQueque(initializer_list<int> list)
{
	const int* it = std::end(list);
	do{
		--it;
		vec.push_back(*it);
	}while (it != std::begin(list));
}

FifoQueque::~FifoQueque()
{
}

FifoIterator FifoQueque::begin() const 
{
	return FifoIterator(*this, 0);
}
FifoIterator FifoQueque::end() const
{
	return FifoIterator(*this, vec.size());
}
