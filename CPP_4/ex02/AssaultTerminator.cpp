/* **************************************************************************** */
/*                                                                      .       */
/*   AssaultTerminator.cpp.cc                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/16/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() : ISpaceMarine(){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy){
	operator=(copy);
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &assign){
	return *this;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I’ll be back..." << std::endl;
}

void AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const{
	return (new AssaultTerminator(*this));
}
