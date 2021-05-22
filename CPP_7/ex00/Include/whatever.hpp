/* **************************************************************************** */
/*                                                                      .       */
/*   whatever.h                                                        / V\     */
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


#ifndef CPP_7_WHATEVER_HPP
#define CPP_7_WHATEVER_HPP

#include <iostream>

template<typename T> void swap(T& a, T& b){
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T> T min(T& a, T& b){
	return  a < b ? a : b;
}

template<typename T> T max(T& a, T& b){
	return  a > b ? a : b;
}

#endif
