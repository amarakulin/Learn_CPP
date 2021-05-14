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
#include "ClapTrap.hpp"
//50, 20, 15, 3, 40
ScavTrap::ScavTrap(const std::string &name1) : ClapTrap(name1, 100, 50, 20, 15, 3, 40, 1)
{
	this->measureIndividuality = 5;
}

ScavTrap::ScavTrap(const ClapTrap &copy1, const ScavTrap &copy) : ClapTrap(copy1){
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

void ScavTrap::challengeNewcomer(){
	energyPoints -= valueEnergyLoss;
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

void ScavTrap::operator=(const ScavTrap &assign){
	this->hitPoints = assign.hitPoints;
	this->name = assign.name;
	this->energyPoints = assign.energyPoints;
	this->level = assign.level;
	this->measureIndividuality = assign.measureIndividuality;
}