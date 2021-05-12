/* **************************************************************************** */
/*                                                                      .       */
/*   Brain.cpp.cc                                                        / V\     */
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


#include "Brain.hpp"
#include <sstream>

std::string Brain::identify() const
{
	std::ostringstream addressBrain;
	addressBrain << this;
	return addressBrain.str();
}

Brain::Brain(){
	std::srand(std::time(NULL));
	this->iq = 50 + rand() % 100;
}
