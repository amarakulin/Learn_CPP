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
	this->hitPoints = _maxHitPoints;
	this->energyPoints = _maxEnergyPoints;
	this->level = 1;
	std::cout << "FragTrap create with name " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy){
	operator=(copy);
}

FragTrap::~FragTrap(){
	std::cout << "FR4G-TP " << this->name
			  << " with level " << level
			  << " has been distructed " << std::endl;
}

void FragTrap::rangeAttack(const std::string &target){
	level += 1;
	std::cout << "FR4G-TP " << this->name
					<< "range attacks " << target
					<< "at range, causing " << this->_rangeAttackDamage
					<< " points of damage!"
					<< " Level up !" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target){
	std::cout << "FR4G-TP " << this->name
			  << "attacks " << target
			  << "at melee, causing " << this->_meleeAttackDamage
			  << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount){
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

void FragTrap::beRepaired(unsigned int amount){
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

void FragTrap::vaulthunter_dot_exe(const std::string &target){
	energyPoints -= _valueEnergyLoss;
	if (energyPoints > 0){
		int randomValue = std::rand() % 5;
		std::string nameAttacks[5] = {"A", "B", "C", "D", "E"};
		std::cout << "FR4G-TP " << this->name
				  << " attacks " << target
				  << " at " << nameAttacks[randomValue]
				  << ", causing " << randomValue * 5
				  << " points of damage!" << std::endl;
	}
	else{
		std::cout << "Don't have enough energy points!" << std::endl;
		energyPoints = 0;
	}
}

void FragTrap::operator=(const FragTrap &assign){
	this->hitPoints = assign.hitPoints;
	this->name = assign.name;
	this->energyPoints = assign.energyPoints;
	this->level = assign.level;
}
