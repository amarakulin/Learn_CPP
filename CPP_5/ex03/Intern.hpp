/* **************************************************************************** */
/*                                                                      .       */
/*   Intern.hpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/19/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_5_INTERN_HPP
#define CPP_5_INTERN_HPP

#include <iostream>

class Intern{
public:
	Intern();
	Intern(Intern const &copy);
	Intern& operator=(const Intern &assign);
	~Intern();
};


#endif