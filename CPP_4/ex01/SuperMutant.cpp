/* **************************************************************************** */
/*                                                                      .       */
/*   SuperMutant.cpp                                                        / V\     */
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


#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << BOLDBLUE "Gaaah. Me want smash heads!" RESET << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy){
	operator=(copy);
}

SuperMutant &SuperMutant::operator=(const SuperMutant &assign){
	if (this != &assign){
		Enemy::operator=(assign);
	}
	return *this;
}

SuperMutant::~SuperMutant(){
	std::cout << BOLDRED "Aaargh..." RESET << std::endl;
}

void SuperMutant::takeDamage(int damage){
	Enemy::takeDamage(damage - valueArmor);
}


