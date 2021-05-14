/* **************************************************************************** */
/*                                                                      .       */
/*   ClapTrap.cpp.cc                                                        / V\     */
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


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name){
	this->name = name;
	this->hitPoints = _maxHitPoints;
	this->energyPoints = _maxEnergyPoints;
	this->level = 1;
	std::cout << "ScavTrap create with name " << name
			  << " with " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &copy){

}

ClapTrap::~ClapTrap(){

}

void ClapTrap::rangeAttack(const std::string &target){
	level += 1;
	std::cout << "FR4G-TP " << this->name
			  << "range attacks " << target
			  << "at range, causing " << this->_rangeAttackDamage
			  << " points of damage!"
			  << " Level up !" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target){
	std::cout << "FR4G-TP " << this->name
			  << "attacks " << target
			  << "at melee, causing " << this->_meleeAttackDamage
			  << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	hitPoints = hitPoints + _armorDamageReduction - static_cast <int> (amount);
	if (hitPoints <= 0){
		hitPoints = 0;
	}
	else if (hitPoints > _maxHitPoints){
		hitPoints = _maxHitPoints;
	}
	std::cout << "FR4G-TP " << this->name
			  << " gets damage amount " << amount
			  << " now he has  " << hitPoints
			  << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	hitPoints += static_cast <int> (amount);
	energyPoints = _maxEnergyPoints;
	if (hitPoints > _maxHitPoints){
		hitPoints = _maxHitPoints;
	}
	std::cout << "FR4G-TP " << this->name
			  << " repaired " << amount
			  << " amounts "
			  << "now he has  " << hitPoints
			  << " hit points "
			  << "and full energy point"<< std::endl;
}


void ClapTrap::operator=(const ClapTrap &assign){
	this->hitPoints = assign.hitPoints;
	this->name = assign.name;
	this->energyPoints = assign.energyPoints;
	this->level = assign.level;
}