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
#include "ClapTrap.hpp"

FragTrap::FragTrap(const std::string &name1, const std::string &name)
		: ClapTrap(name1)
{
	maxHitPoints = 100;
	maxEnergyPoints = 100;
	meleeAttackDamage = 30;
	rangeAttackDamage = 20;
	armorDamageReduction = 5;
	valueEnergyLoss = 25;
}

FragTrap::FragTrap(const ClapTrap &copy1, const FragTrap &copy) : ClapTrap(copy1){
	operator=(copy);
}

FragTrap::~FragTrap(){
	std::cout << "FR4G-TP " << this->name
			  << " with level " << level
			  << ". Left " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!"
			  << " He has been distructed" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target){
	energyPoints -= valueEnergyLoss;
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
	maxHitPoints = 100;
	maxEnergyPoints = 100;
	meleeAttackDamage = 30;
	rangeAttackDamage = 20;
	armorDamageReduction = 5;
	valueEnergyLoss = 25;
}
