/* **************************************************************************** */
/*                                                                      .       */
/*   SuperTrap.cpp.cc                                                        / V\     */
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


#include "SuperTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(), FragTrap(name), NinjaTrap(name){
	this->maxHitPoints = 100;
	this->hitPoints = FragTrap::maxHitPoints;
	this->maxEnergyPoints = 120;
	this->energyPoints = NinjaTrap::maxEnergyPoints;
	this->meleeAttackDamage = 60;
	this->rangeAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->valueEnergyLoss = NinjaTrap::valueEnergyLoss;
	this->startLevel = NinjaTrap::startLevel;
	this->level = NinjaTrap::startLevel;
	std::cout << "Create ROBOT with name " << name
			  << " with " << this->hitPoints
			  << " hits and " << this->energyPoints
			  << " energy points!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : FragTrap(copy), NinjaTrap(copy){
	operator=(copy);
}

SuperTrap &SuperTrap::operator=(const SuperTrap &assign){
	if (this != &assign){
		maxEnergyPoints = assign.maxHitPoints;
		hitPoints = assign.hitPoints;
		maxEnergyPoints = assign.maxEnergyPoints;
		energyPoints = assign.maxEnergyPoints;
		meleeAttackDamage = assign.meleeAttackDamage;
		rangeAttackDamage = assign.rangeAttackDamage;
		armorDamageReduction = assign.rangeAttackDamage;
		valueEnergyLoss = assign.valueEnergyLoss;
		startLevel = assign.startLevel;
		level = assign.startLevel;
	}
	return *this;
}

SuperTrap::~SuperTrap(){
	std::cout << "SuperTrap " << name
			  << " with level " << level
			  << ". Left " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!"
			  << " He has been distructed" << std::endl;
}

void SuperTrap::rangeAttack(const std::string &target){
	FragTrap::rangeAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target){
	NinjaTrap::meleeAttack(target);
}

