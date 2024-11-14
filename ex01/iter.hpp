#pragma once

#include <iostream>
#include <string>
#include <cstring>


void	to_upper(char &c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return ;
}


void printInt(int& value) {
    std::cout << value << " ";
}

void printFloat(float& value) {
	std::cout << value << " ";
}

void multiplyByTwo(float& value) {
    value *= 2;
}

template <typename T>
void	iter(T* string, size_t length, void (*f)(T&))
{
	size_t i = 0;
	while (i < length)
	{
		f(string[i]);
		i++;
	}
}