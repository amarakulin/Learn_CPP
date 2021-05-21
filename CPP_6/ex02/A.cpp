/* **************************************************************************** */
/*                                                                      .       */
/*   A.cpp                                                        / V\     */
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


#include "Include/A.hpp"

A::A() : Base(){
	_name = "A!";
}

A::A(const A &copy){
	operator=(copy);
}

A &A::operator=(const A &assign){
	if (this != &assign){
		_name = assign._name;
	}
	return *this;
}

A::~A(){
}

const std::string &A::getName() const{
	return _name;
}
