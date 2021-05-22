/* **************************************************************************** */
/*                                                                      .       */
/*   B.cpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/21/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "Include/B.hpp"

B::B() : Base(){
	std::cout << "Class 'B' has been created" << std::endl;
	_name = "B!";
}

B::B(const B &copy){
	operator=(copy);
}

B &B::operator=(const B &assign){
	if (this != &assign){
		_name = assign._name;
	}
	return *this;
}

B::~B(){
}

const std::string &B::getName() const{
	return _name;
}
