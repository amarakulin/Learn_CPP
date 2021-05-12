/* **************************************************************************** */
/*                                                                      .       */
/*   Brain.hpp.h                                                        / V\     */
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


#ifndef CPP_1_BRAIN_HPP
#define CPP_1_BRAIN_HPP

#include <iostream>

class Brain{
public:
	Brain();

	int iq;

	std::string identify() const;
};


#endif
