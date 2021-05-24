/* **************************************************************************** */
/*                                                                      .       */
/*   iter.hpp.h                                                        / V\     */
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


#ifndef CPP_7_ITER_HPP
#define CPP_7_ITER_HPP

#include <iostream>

template <typename T>
	void iter(const T* ptrArr, const size_t lenArr, void (*func)(T const &arg)){
		for (int i = 0; i < lenArr; i++){
			func(ptrArr[i]);
		}
	}

template <typename T>
void print(T const &x){
	std::cout << x << std::endl;
}


template <typename T>
void printArr(const T* ptrArr, const size_t lenArr){
	for (int i = 0; i < lenArr; i++){
		std::cout << ptrArr[i] << " ";
	}
	std::cout << std::endl;
}

#endif
