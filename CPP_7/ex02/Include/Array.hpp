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
		_arrElements = new T[0];
		_size = 0;
	}

	Array(unsigned int n){
		_arrElements = new T[n];
		std::fill(_arrElements, _arrElements + n, T());
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
		delete[] _arrElements;
		_arrElements = nullptr;
	}

private:
	T* _arrElements;
	int _size;
};

#endif