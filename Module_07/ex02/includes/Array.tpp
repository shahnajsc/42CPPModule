#include "Array.hpp"

template<typename T>
Array<T>::Array(): arrSize(0), arr(nullptr) {
}

template<typename T>
Array<T>::Array(unsigned int n)
: arrSize(n), arr(n > 0 ? new T[n] : nullptr) {
}

template<typename T>
Array<T>::Array(const Array &copyCons)
: arrSize(copyCons.arrSize), arr(copyCons.arrSize > 0 ? new T[copyCons.arrSize] : nullptr) {
	if (arrSize > 0) {
		for (unsigned int index = 0; index < arrSize; index++) {
			arr[index] = copyCons.arr[index];
		}
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& otherCons) {
	if (this != &otherCons) {
		delete[] this->arr;
		this->arrSize = otherCons.arrSize;
		this->arr = (arrSize > 0) ? new T[arrSize] : nullptr;
		if (arrSize > 0) {
			for (unsigned int index = 0; index < arrSize; index++) {
				arr[index] = otherCons.arr[index];
			}
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int _arrIndex) {
	if (_arrIndex >= arrSize) {
		throw std::out_of_range("Array index is out of range");
	}
	return arr[_arrIndex];
}

template <typename T>
const T& Array<T>::operator[](unsigned int _arrIndex) const {
	if (_arrIndex >= arrSize) {
		throw std::out_of_range("Array index is out of range");
	}
	return arr[_arrIndex];
}

template <typename T>
unsigned int Array<T>::size() const {
	return this->arrSize;
}

template<typename T>
Array<T>::~Array() {
	delete[] arr;
}
