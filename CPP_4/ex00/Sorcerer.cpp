/* **************************************************************************** */
/*                                                                      .       */
/*   Sorcerer.cpp                                                        / V\     */
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


#include "Sorcerer.hpp"
#include "Colors.hpp"

Sorcerer::Sorcerer(){
	setParamConstructor("No name", "No title");

}

Sorcerer::Sorcerer(std::string name, std::string title){
	setParamConstructor(name, title);
}

Sorcerer::~Sorcerer(){
	std::cout << BOLDRED + this->_name + ", " + this->_title
				+ ", is dead. Consequences will never be the same!"
				+ RESET << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &assign){
	if (this != &assign){
		this->_name = assign.getName();
		this->_title = assign.getTitle();
	}
	return *this;
}


Sorcerer::Sorcerer(const Sorcerer &copy){
	operator=(copy);
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer){
	out << BOLDGREEN << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle()
						+ ", and I like ponies!"
						RESET << std::endl;
	return out;
}

void Sorcerer::setParamConstructor(std::string name, std::string title){
	this->_name = name;
	this->_title = title;
	std::cout << BOLDBLUE + this->_name + ", " +
				this->_title +
				", is born!" RESET << std::endl;
}

const std::string &Sorcerer::getName() const{
	return _name;
}

void Sorcerer::setName(const std::string &name){
	_name = name;
}

const std::string &Sorcerer::getTitle() const{
	return _title;
}

void Sorcerer::setTitle(const std::string &title){
	_title = title;
}