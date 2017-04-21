#pragma once
#include <stdlib.h>
#include <initializer_list>
#include <vector>
#include <iostream>

using std::vector;
using std::ostream;
using std::initializer_list;

template<typename T>
class FifoQueque
{
public:
	FifoQueque();
	FifoQueque(initializer_list<T> list);
	~FifoQueque();
	friend FifoQueque& operator<< (FifoQueque& q, T a) 
	{
		q.vec.insert(q.vec.begin(), a);
		return q;
	}
	friend FifoQueque& operator>> (FifoQueque& q, T& a)
	{
		if(q.vec.size()<=0)
			return q;
		a = q.vec[0];
		q.vec.erase(q.vec.begin());
		return q;
	}
	friend ostream& operator<< (ostream& os, const FifoQueque& q)
	{
		for (T num : q.vec)
			os << num << " ";
		return os;
	}
private:
	vector<T> vec;
};

#include "FifoQuequeImpl.h"