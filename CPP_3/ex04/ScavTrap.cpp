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

ScavTrap::ScavTrap(){

}

ScavTrap::ScavTrap(const std::string &name1) : ClapTrap(name1, 100, 50, 20, 15, 3, 40, 1){
	this->measureIndividuality = 5;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	operator=(copy);
}

ScavTrap::~ScavTrap(){
	std::cout << "CPP_M_03 " << name
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
		std::cout << "CPP_M_03 " << name
				  << " give a challenge " << nameChallenge[randomValue]
				  << std::endl;
		measureIndividuality += 5;
	}
	else{
		std::cout << "Don't have enough energy points!" << std::endl;
		energyPoints = 0;
	}
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign){
	if (this != &assign){
		this->hitPoints = assign.hitPoints;
		this->name = assign.name;
		this->energyPoints = assign.energyPoints;
		this->level = assign.level;
		this->measureIndividuality = assign.measureIndividuality;
	}
	return *this;
}