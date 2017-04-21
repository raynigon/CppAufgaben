#include "FifoIterator.h"



FifoIterator::FifoIterator(const FifoQueque& inQueque, size_t inIndex) : queque(inQueque), index(inIndex)
{
}


FifoIterator::~FifoIterator()
{
}

bool FifoIterator::operator!=(const FifoIterator& inIt) const
{
	return (&queque != &inIt.queque) && (index != inIt.index);
}

const FifoIterator& FifoIterator::operator++()
{
	++index;
	return *this;
}

const FifoIterator& FifoIterator::operator--()
{
	--index;
	return *this;
}

int FifoIterator::operator*() const 
{ 
	return queque.vec[index];
}