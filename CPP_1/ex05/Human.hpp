/* **************************************************************************** */
/*                                                                      .       */
/*   Human.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/11/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_1_HUMAN_HPP
#define CPP_1_HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class Human{
public:
	const Brain brain;

	const Brain getBrain();
	std::string identify();
};


#endif
