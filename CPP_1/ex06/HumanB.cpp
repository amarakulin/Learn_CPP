/* **************************************************************************** */
/*                                                                      .       */
/*   HumanB.cpp.cc                                                        / V\     */
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


#include "HumanB.hpp"

HumanB::HumanB(const std::string &name){
	this->name = name;
}

void HumanB::attack() const{
	std::cout << this->name + " attacks with his " + weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}
