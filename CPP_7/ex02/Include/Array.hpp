/* **************************************************************************** */
/*                                                                      .       */
/*   Array.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/22/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_7_ARRAY_HPP
#define CPP_7_ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array{
public:
	Array(){
		_arrElements = new T();
		_size = 0;
	}

	Array(unsigned int n){
		_arrElements = new T[n];
		std::fill(_arrElements, _arrElements + n, 0);
		_size = static_cast <int> (n);
	}

	Array(Array const &copy){
		operator=(copy);
	}

	Array& operator=(const Array &assign){
		if (this != &assign){
			deleteArr();
			_arrElements = new T[assign._size];
			std::copy(assign, assign, _arrElements);
		}
		return *this;
	}

	T& operator[](int &idx){
		if (idx >= _size || idx < 0){
			throw NotExistingElementException();
		}
		return _arrElements[idx];
	}

	~Array(){
		deleteArr();
	}

	class NotExistingElementException : public std::exception{
		const char *what() const throw(){
			return "Index out of bounds";
		}
	};

	int size(){
		return _size;
	}

	void deleteArr(){
		for (int i = 0; i < _size; i++){
			delete _arrElements[i];
		}
		delete _arrElements;
		_arrElements = nullptr;
	}

private:
	T* _arrElements;
	int _size;
};



//template<class T>
//Array<T>::Array(){
//	_arrElements = new T();
//	_size = 0;
//}

//template<class T>
//Array<T>::Array(unsigned int n){
//	_arrElements = new T[n];
//	std::fill(_arrElements, _arrElements + n, 0);
//	_size = static_cast <int> (n);
//}

//template<class T>
//Array<T>::Array(const Array &copy){
//	operator=(copy);
//}

//template<class T>
//Array<T> &Array<T>::operator=(const Array &assign){
//	if (this != &assign){
//		deleteArr();
//		_arrElements = new T[assign._size];
//		std::copy(assign, assign, _arrElements);
//	}
//	return *this;
//}

//template<class T>
//T &Array<T>::operator[](int &idx){
//	try{
//		if (idx >= _size || idx < 0){
//			throw NotExistingElementException();
//		}
//		return _arrElements[idx];
//	}
//	catch (std::exception &e){
//		std::cout << "[-] Error: " << idx << " " << e.what() << std::endl;
//	}
//}

//template<class T>
//Array<T>::~Array(){
//	deleteArr();
//}

//template<class T>
//void Array<T>::deleteArr(){
//	for (int i = 0; i < _size; i++){
//		delete _arrElements[i];
//	}
//	delete _arrElements;
//	_arrElements = nullptr;
//}

//template<class T>
//int Array<T>::size(){
//	return _size;
//}

//template<class T>
//T *Array<T>::getArrElements() const{
//	return _arrElements;
//}

//template<class T>
//const char *Array<T>::NotExistingElementException::what() const throw(){
//	return "Not Existing Element";
//}


//template<class T>
//std::ostream &operator<<(std::ostream &os, const Array<T> &array)
//{
//	os << "_arrElements: " << array._arrElements << " _size: " << array._size;
//	return os;
//}

#endif