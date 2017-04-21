#pragma once

#include "FifoQueque.h"

class FifoIterator
{
	friend int main();
public:
	FifoIterator(const FifoQueque& inQueque, size_t inIndex);
	~FifoIterator();

	bool operator!=(const FifoIterator& inIt) const;
	int operator*() const;
	const FifoIterator& operator++();
	const FifoIterator& operator--();
private:
	const FifoQueque queque;
	size_t index;
};

