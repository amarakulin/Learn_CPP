/* **************************************************************************** */
/*                                                                      .       */
/*   Zombie.cpp.cc                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/11/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "Zombie.hpp"

const std::string &Zombie::getName() const{
	return name;
}

void Zombie::setName(const std::string &name){
	Zombie::name = name;
}

const std::string &Zombie::getType() const{
	return type;
}

void Zombie::setType(const std::string &type){
	Zombie::type = type;
}

void Zombie::announce(){
	std::string infoStr = "<" + Zombie::getName() + " " + "(" +
								Zombie::getType() +")>";
	std::cout << infoStr + " Braiiiiiiinnnssss...";
}
