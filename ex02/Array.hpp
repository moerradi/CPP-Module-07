#pragma once

#include <iostream>
template <typename T>
class Array
{
	public:
		Array()
		{
			this->_size = 0;
			this->_array = new T();
		}

		Array(unsigned int size)
		{
			_size = size;
			_array = new T[size];
		}

		Array(const Array<T>& other)
		{
			_size = other._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];
		}

		~Array()
		{
			delete[] _array;
		}

		Array<T>& operator=(const Array<T>& other) {
			delete[] _array;
			_size = other._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];
			return *this;
		}

		T& operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::out_of_range("index out of range");
			return _array[index];
		}

		const T& operator[](unsigned int index) const
		{
			if (index >= _size)
				throw std::out_of_range("index out of range");
			return _array[index];
		}

		unsigned int size() const
		{
			return _size;
		}

	private:
		T* _array;
		unsigned int _size;
};
