/* **************************************************************************** */
/*                                                                      .       */
/*   HumanA.cpp.cc                                                        / V\     */
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


#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name),
														  weapon(weapon)
{}


void HumanA::attack() const{
	std::cout << this->name + " attacks with his " + weapon.getType() << std::endl;
}

