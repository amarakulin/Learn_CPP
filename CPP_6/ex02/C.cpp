/* **************************************************************************** */
/*                                                                      .       */
/*   C.cpp                                                        / V\     */
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


#include "Include/C.hpp"

C::C(){
	_name = "C!";
}

C::C(const C &copy){
	operator=(copy);
}

C &C::operator=(const C &assign){
	if (this != &assign){
		_name = assign._name;
	}
	return *this;
}

C::~C(){
}

const std::string &C::getName() const{
	return _name;
}
