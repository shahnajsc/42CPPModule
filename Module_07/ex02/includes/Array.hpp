#pragma once
#include <iostream>

#define GREEN		"\033[0;92m"
#define RED			"\033[0;31m"
#define RESET		"\033[0m"

template<typename T>
class Array
{
private:
	unsigned int	arrSize;
	T				*arr;

public:
	Array();
	Array(unsigned int n);

	Array(const Array &copyCons);
	Array& operator= (const Array &otherCons);

	T& operator[](unsigned int _arrIndex);
	const T& operator[](unsigned int _arrIndex) const;
	unsigned int size() const;

	~Array();
};


