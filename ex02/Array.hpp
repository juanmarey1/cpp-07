#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T	*elements;
		unsigned int	sizeArray;

	public:
		Array(): elements(nullptr), sizeArray(0) {};

		Array(unsigned int n);

		Array(const Array &array);
		Array	&operator=(const Array &array);
		~Array();

		T				&operator[](unsigned int pos);
		const T			&operator[](unsigned int pos) const;
		unsigned int	size() const;
};

#include "Array.tpp"
