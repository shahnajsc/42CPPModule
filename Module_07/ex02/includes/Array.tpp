#include "Array.hpp"

template<typename T>
Array<T>::Array(): arrSize(0), arr(nullptr)
{
}
template<typename T>
Array<T>::Array(unsigned int n): arrSize(n), arr(n > 0 ? new T[n] : nullptr)
{
}
template<typename T>
Array<T>::Array(const Array &copyCons){

}

template<typename T>
Array<T>& Array<T>::operator=(const Array& otherCons){

}

template<typename T>
Array<T>::~Array()
{
	delete[] arr;
}

