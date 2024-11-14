#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->sizeArray = n;
	this->elements = new T[this->sizeArray];
}

template <typename T>
Array<T>::Array(const Array &array)
{
	this->sizeArray = array.sizeArray;
	this->elements = new T[this->sizeArray];
	for (unsigned int i = 0; i < this->sizeArray; i++)
	{
		this->elements[i] = array.elements[i];
	}
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &array)
{
	if (this != &array)
	{
		delete[] elements;

		this->sizeArray = array.sizeArray;
		this->elements = new T[this->sizeArray];
		for (unsigned int i = 0; i < this->sizeArray; i++)
		{
			this->elements[i] = array.elements[i];
		}
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] elements;
}

template <typename T>
T	&Array<T>::operator[](unsigned int pos)
{
	if (pos >= this->sizeArray)
		throw std::out_of_range("Invalid index");
	return (this->elements[pos]);
}

template <typename T>
const T	&Array<T>::operator[](unsigned int pos) const
{
	if (pos >= this->sizeArray)
		throw std::out_of_range("Invalid index");
	return (this->elements[pos]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->sizeArray);
}
