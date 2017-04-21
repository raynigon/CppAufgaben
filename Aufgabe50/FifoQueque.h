#pragma once
#include <stdlib.h>
#include <initializer_list>
#include <vector>
#include <iostream>

using std::vector;
using std::ostream;
using std::initializer_list;

class FifoQueque
{
	friend class FifoIterator;
	friend FifoQueque& operator<< (FifoQueque& q, int a)
	{
		q.vec.insert(q.vec.begin(), a);
		return q;
	}
	friend FifoQueque& operator>> (FifoQueque& q, int& a)
	{
		if (q.vec.size() <= 0)
			return q;
		a = q.vec[0];
		q.vec.erase(q.vec.begin());
		return q;
	}
	friend ostream& operator<< (ostream& os, const FifoQueque& q)
	{
		for (int num : q.vec)
			os << num << " ";
		return os;
	}
public:
	FifoQueque();
	FifoQueque(initializer_list<int> list);
	~FifoQueque();
	FifoIterator begin() const;
	FifoIterator end() const;
private:
	vector<int> vec;
};

