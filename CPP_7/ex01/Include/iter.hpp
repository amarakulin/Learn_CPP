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

template <typename P, typename F>
	void iter(const P* ptrArr, const size_t lenArr, F mapFunc){
		for (int i = 0; i < lenArr; i++){
			mapFunc(ptrArr[i]);
		}
	}


template <typename P, typename L>
void printArr(P ptrArr, L lenArr){
	for (int i = 0; i < lenArr; i++){
		std::cout << ptrArr[i] << " ";
	}
	std::cout << std::endl;
}

#endif
