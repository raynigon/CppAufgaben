#pragma once

template<typename T>
FifoQueque<T>::FifoQueque()
{
}

template<typename T>
FifoQueque<T>::FifoQueque(initializer_list<T> list)
{
	const T* it = std::end(list);
	do {
		--it;
		vec.push_back(*it);
	} while (it != std::begin(list));
}

template<typename T>
FifoQueque<T>::~FifoQueque()
{
}
