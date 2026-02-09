#pragma once

#define GREEN		"\033[0;92m"
#define RED			"\033[0;31m"
#define RESET		"\033[0m"

template<typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T& min(const T& a, const T& b) {
	return a < b ? a : b;
}

template<typename T>
const T& max(const T& a, const T& b) {
	return a > b ? a : b;
}
