/* **************************************************************************** */
/*                                                                      .       */
/*   FragTrap.cpp                                                      / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/13/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) {
	this->name = name;
	std::cout << "FragTrap create with name " << name << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FR4G-TP " << this->name
			  << "has been distructed " << std::endl;
}

void FragTrap::rangeAttack(const std::string &target){

	std::cout << "FR4G-TP " << this->name
					<< "range attacks " << target
					<< "at range, causing " << this->_rangeAttackDamage
					<< "points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target){
	std::cout << "FR4G-TP " << this->name
			  << "attacks " << target
			  << "at melee, causing " << this->_meleeAttackDamage
			  << "points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount){
	hitPoints = hitPoints + _armorDamageReduction - static_cast <int> (amount);
	if (hitPoints <= 0){
		hitPoints = 0;
	}
	else if (hitPoints > 100){
		hitPoints = 100;
	}
	std::cout << "FR4G-TP " << this->name
			  << " gets damage amount " << amount
			  << " now he has  " << hitPoints
			  << " hit points" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
	hitPoints += static_cast <int> (amount);
	if (hitPoints > 100){
		hitPoints = 100;
	}
	std::cout << "FR4G-TP " << this->name
			  << " repaired " << amount
			  << " amounts "
			  << "now he has  " << hitPoints
			  << " hit points" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target){

}
