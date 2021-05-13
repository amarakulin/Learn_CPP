/* **************************************************************************** */
/*                                                                      .       */
/*   Weapon.cpp.cc                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/12/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "Weapon.hpp"

void Weapon::setType(const std::string &type){
	Weapon::type = type;
}

const std::string &Weapon::getType() const{
	return type;
}

Weapon::Weapon(const std::string &type){
	this->type = type;
}
