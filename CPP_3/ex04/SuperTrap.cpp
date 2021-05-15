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

SuperTrap::SuperTrap(){

}
SuperTrap::SuperTrap(const std::string &name) : FragTrap(), NinjaTrap() {
	this->maxHitPoints = FragTrap::getMaxHitPoints();
	this->maxEnergyPoints = NinjaTrap::getMaxEnergyPoints();
	this->meleeAttackDamage = NinjaTrap::getMeleeAttackDamage();
	this->rangeAttackDamage = FragTrap::getRangeAttackDamage();
	this->armorDamageReduction = FragTrap::getArmorDamageReduction();
	this->valueEnergyLoss = NinjaTrap::getValueEnergyLoss();
	this->startLevel = 1;
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = NinjaTrap::energyPoints;
	this->level = startLevel;
	std::cout << "SuperTRAP with ARGS" << std::endl;
	std::cout << "Create ROBOT with name " << name
			  << " with " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!" << std::endl;
}


SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy){
	operator=(copy);
}

SuperTrap &SuperTrap::operator=(const SuperTrap &assign){
	if (this != &assign){
		this->hitPoints = assign.hitPoints;
		this->name = assign.name;
		this->energyPoints = assign.energyPoints;
		this->level = assign.level;
	}
	return *this;
}

void SuperTrap::rangeAttack(const std::string &target){
	FragTrap::rangeAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target){
	NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap(){
	std::cout << "Super " << name
			  << " with level " << level
			  << ". Left " << hitPoints
			  << " hits and " << energyPoints
			  << " energy points!"
			  << " He has been distructed" << std::endl;
}




