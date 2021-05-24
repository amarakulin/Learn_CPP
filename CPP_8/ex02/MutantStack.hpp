/* **************************************************************************** */
/*                                                                      .       */
/*   MutantStack.hpp                                                   / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/24/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_8_MUTANTSTACK_HPP
#define CPP_8_MUTANTSTACK_HPP

#include <iostream>
#include <stack>

class MutantStack{
public:
	MutantStack();
	MutantStack(MutantStack const &copy);
	MutantStack& operator=(const MutantStack &assign);
	~MutantStack();

};


#endif