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

ClapTrap::ClapTrap(const std::string &name,
					int maxHitPoints,
					int maxEnergyPoints,
					int meleeAttackDamage,
					int rangeAttackDamage,
					int armorDamageReduction,
					int valueEnergyLoss,
					int startLevel){
	this->maxHitPoints = maxHitPoints;
	this->maxEnergyPoints = maxEnergyPoints;
	this->meleeAttackDamage = meleeAttackDamage;
	this->rangeAttackDamage = rangeAttackDamage;
	this->armorDamageReduction = armorDamageReduction;
	this->valueEnergyLoss = valueEnergyLoss;
	this->startLevel = startLevel;
	this->name = name;
	this->hitPoints = maxHitPoints;
	this->energyPoints = maxEnergyPoints;
	this->level = startLevel;
	std::cout << "Create ROBOT with name " << name
			  << " with " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &copy){
	operator=(copy);
}

ClapTrap::~ClapTrap(){
}

void ClapTrap::rangeAttack(const std::string &target){
	this->level += 1;
	std::cout << this->name
			  << " range attacks " << target
			  << "at range, causing " << this->rangeAttackDamage
			  << " points of damage!"
			  << " Level up !" << std::endl;
	std::cout << "Level: " << this->level << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target){
	std::cout << this->name
			  << " attacks " << target
			  << "at melee, causing " << this->meleeAttackDamage
			  << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	hitPoints = hitPoints + armorDamageReduction - static_cast <int> (amount);
	if (hitPoints <= 0){
		hitPoints = 0;
	}
	else if (hitPoints > maxHitPoints){
		hitPoints = maxHitPoints;
	}
	std::cout << this->name
			  << " gets damage amount " << amount
			  << " now he has  " << hitPoints
			  << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	hitPoints += static_cast <int> (amount);
	energyPoints = maxEnergyPoints;
	if (hitPoints > maxHitPoints){
		hitPoints = maxHitPoints;
	}
	std::cout << this->name
			  << " repaired " << amount
			  << " amounts "
			  << "now he has  " << hitPoints
			  << " hit points "
			  << "and full energy point"<< std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign){
	if (this != &assign){
		this->hitPoints = assign.hitPoints;
		this->name = assign.name;
		this->energyPoints = assign.energyPoints;
		this->level = assign.level;
	}
	return *this;
}
