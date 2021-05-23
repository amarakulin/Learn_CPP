/* **************************************************************************** */
/*                                                                      .       */
/*   easyfind.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/23/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_8_EASYFIND_H
#define CPP_8_EASYFIND_H

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>
#include <iterator>

class NotExistElementException : public std::exception{
	const char *what() const throw(){
		return "Elem doesn't exist";
	}
};

template<typename T>
typename T::iterator easyfind(T container, int value){
	typename T::iterator elem = std::find(container.begin(), container.end(), value);
	if (elem == container.end()){
		throw NotExistElementException();
	}
	return elem;
}

#endif
