/* **************************************************************************** */
/*                                                                      .       */
/*   ScavTrap.cpp                                                      / V\     */
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


#include "ScavTrap.hpp"


ScavTrap::ScavTrap(const std::string &name) {
	this->name = name;
	this->hitPoints = _maxHitPoints;
	this->energyPoints = _maxEnergyPoints;
	this->level = 1;
	this->measureIndividuality = 5;
	std::cout << "ScavTrap create with name " << name
			  << " with " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
	operator=(copy);
}

ScavTrap::~ScavTrap(){
	std::cout << "CPP_M_03 " << this->name
			  << " with level " << level
			  << " and measure individuality " << measureIndividuality
			  << ". Left " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!"
			  << " He has been distructed" << std::endl;
}

void ScavTrap::rangeAttack(const std::string &target){
	level += 1;
	std::cout << "CPP_M_03 " << this->name
			  << "range attacks " << target
			  << "at range, causing " << this->_rangeAttackDamage
			  << " points of damage!"
			  << " Level up !" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target){
	std::cout << "CPP_M_03 " << this->name
			  << "attacks " << target
			  << "at melee, causing " << this->_meleeAttackDamage
			  << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
	hitPoints = hitPoints + _armorDamageReduction - static_cast <int> (amount);
	if (hitPoints <= 0){
		hitPoints = 0;
	}
	else if (hitPoints > _maxHitPoints){
		hitPoints = _maxHitPoints;
	}
	std::cout << "CPP_M_03 " << this->name
			  << " gets damage amount " << amount
			  << " now he has  " << hitPoints
			  << " hit points" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
	hitPoints += static_cast <int> (amount);
	energyPoints = _maxEnergyPoints;
	if (hitPoints > _maxHitPoints){
		hitPoints = _maxHitPoints;
	}
	std::cout << "CPP_M_03 " << this->name
			  << " repaired " << amount
			  << " amounts "
			  << "now he has  " << hitPoints
			  << " hit points "
			  << "and full energy point"<< std::endl;
}

void ScavTrap::operator=(const ScavTrap &assign){
	this->hitPoints = assign.hitPoints;
	this->name = assign.name;
	this->energyPoints = assign.energyPoints;
	this->level = assign.level;
	this->measureIndividuality = assign.measureIndividuality;
}

void ScavTrap::challengeNewcomer(){
	energyPoints -= _valueEnergyLoss;
	if (energyPoints > 0){
		int randomValue = std::rand() % 5;
		std::string nameChallenge[5] = {"A", "B", "C", "D", "E"};
		std::cout << "CPP_M_03 " << this->name
				  << " give a challenge " << nameChallenge[randomValue]
				  << std::endl;
		measureIndividuality += 5;
	}
	else{
		std::cout << "Don't have enough energy points!" << std::endl;
		energyPoints = 0;
	}
}
