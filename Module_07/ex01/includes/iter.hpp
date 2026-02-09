#pragma once
#include <iostream>

#define GREEN		"\033[0;92m"
#define RED			"\033[0;31m"
#define RESET		"\033[0m"

template<typename T>
void iter(T *arr, size_t const len,  void (*func)(T &funcParam)) {

	std::cout << "Printing from regular iter function" << std::endl;
	for (size_t index = 0; index < len; index++) {
		func(arr[index]);
	}
}

template<typename T>
void iter(const T *arr, size_t const len,  void (*func)(const T &funcParam)) {
	std::cout << "Printing from const iter function" << std::endl;
	for (size_t index = 0; index < len; index++) {
		func(arr[index]);
	}
}

template<typename T>
void printF(T &funcParam) {
	std::cout << "Value: " << funcParam << std::endl;
}

template<typename T>
void printF(const T &funcParam) {
	std::cout << "Value: " << funcParam << std::endl;
}
