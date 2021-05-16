/* **************************************************************************** */
/*                                                                      .       */
/*   Victim.cpp                                                        / V\     */
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


#include "Victim.hpp"
#include "Colors.hpp"

Victim::Victim(){
	setParamConstructor("No name");

}

Victim::Victim(std::string name){
	setParamConstructor(name);
}

Victim::~Victim(){
	std::cout << BOLDRED << "Victim " + this->_name +
				 + " just died for no apparent reason!"
				 + RESET << std::endl;
}

Victim &Victim::operator=(const Victim &assign){
	if (this != &assign){
		this->_name = assign.getName();
	}
	return *this;
}


Victim::Victim(const Victim &copy){
	operator=(copy);
}

std::ostream &operator<<(std::ostream &out, const Victim &victim){
	out << BOLDGREEN << "I'm " + victim.getName()
						+ " and I like otters!"
						RESET << std::endl;
	return out;
}

void Victim::setParamConstructor(std::string name){
	this->_name = name;
	std::cout << BOLDBLUE << "Some random victim called "
				+ this->_name + ", " +
				" just appeared!" RESET << std::endl;
}

const std::string &Victim::getName() const{
	return _name;
}

void Victim::setName(const std::string &name){
	_name = name;
}