/* **************************************************************************** */
/*                                                                      .       */
/*   NinjaTrap.cpp.cc                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/14/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 120, 60, 5, 0, 40, 1){

}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &assign){
	if (this == &assign){
		this->hitPoints = assign.hitPoints;
		this->name = assign.name;
		this->energyPoints = assign.energyPoints;
		this->level = assign.level;
	}
	return *this;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy){
	operator=(copy);
}

void NinjaTrap::ninjaShoebox(const ClapTrap &obj){
	std::cout << "get a ClapTrap obj" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &obj){
	std::cout << "get a FragTrap obj" << std::endl;

}

void NinjaTrap::ninjaShoebox(const ScavTrap &obj){
	std::cout << "get a ScavTrap obj" << std::endl;

}

void NinjaTrap::ninjaShoebox(const NinjaTrap &obj){
	std::cout << "get a NinjaTrap obj" << std::endl;

}

