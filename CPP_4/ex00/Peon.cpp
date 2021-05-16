/* **************************************************************************** */
/*                                                                      .       */
/*   Peon.cpp                                                        / V\     */
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


#include "Peon.hpp"
#include "Colors.hpp"

Peon::Peon(){
	setParamConstructor("No name");
}

Peon::Peon(std::string name) : Victim(name){
	setParamConstructor(name);
}

Peon::Peon(const Peon &copy){
	operator=(copy);
}

Peon::~Peon(){
	std::cout << BOLDRED "Bleuark..." << RESET << std::endl;
}

Peon &Peon::operator=(const Peon &assign){
	if (this != &assign){
		this->setName(assign.getName());
	}
	return *this;;
}

void Peon::setParamConstructor(std::string name){
	std::cout << BOLDBLUE "Zog zog." << RESET << std::endl;
	setName(name);
}


