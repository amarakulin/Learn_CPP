/* **************************************************************************** */
/*                                                                      .       */
/*   Otter.cpp                                                        / V\     */
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


#include "Otter.hpp"
#include "Colors.hpp"

Otter::Otter(){
	setParamConstructor("No name");
}

Otter::Otter(std::string name) : Victim(name){
	setParamConstructor(name);
}

Otter::Otter(const Otter &copy){
	operator=(copy);
}

Otter::~Otter(){
	std::cout << BOLDRED "Otter is death" << RESET << std::endl;
}

Otter &Otter::operator=(const Otter &assign){
	if (this != &assign){
		this->setName(assign.getName());
	}
	return *this;;
}

void Otter::setParamConstructor(std::string name){
	std::cout << BOLDBLUE "Outer is born." << RESET << std::endl;
	setName(name);
}