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


NinjaTrap::NinjaTrap(){

}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap() {
	this->maxHitPoints = 60;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangeAttackDamage = 50;
	this->armorDamageReduction = 0;
	this->valueEnergyLoss = 40;
	this->startLevel = 1;
	this->name = name;
	this->hitPoints = maxHitPoints;
	this->energyPoints = maxEnergyPoints;
	this->level = startLevel;
	std::cout << "Create ROBOT with name " << name
			  << " with " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!" << std::endl;
}

NinjaTrap::~NinjaTrap(){
	std::cout << "NINJA " << name
			  << " with level " << level
			  << ". Left " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!"
			  << " He has been distructed" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy){
	operator=(copy);
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &assign){
	if (this == &assign){
		this->maxHitPoints = assign.maxHitPoints;
		this->maxEnergyPoints = assign.maxEnergyPoints;
		this->meleeAttackDamage = assign.meleeAttackDamage;
		this->rangeAttackDamage = assign.rangeAttackDamage;
		this->armorDamageReduction = assign.armorDamageReduction;
		this->valueEnergyLoss = assign.valueEnergyLoss;
		this->startLevel = assign.startLevel;
		this->hitPoints = assign.hitPoints;
		this->name = assign.name;
		this->energyPoints = assign.energyPoints;
		this->level = assign.level;
	}
	return *this;
}

void NinjaTrap::ninjaShoebox(const ClapTrap &obj){
	std::cout << "get a ClapTrap obj  with name " << obj.name << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &obj){
	std::cout << "get a FragTrap obj with name " << obj.name << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &obj){
	std::cout << "get a ScavTrap obj with name " << obj.name << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &obj){
	std::cout << "get a NinjaTrap obj with name " << obj.name << std::endl;
}


