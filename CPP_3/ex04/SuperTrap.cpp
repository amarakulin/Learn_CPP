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
//100, 100, 30, 20, 5, 25, 1
//60, 120, 60, 5, 0, 40, 1
SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name, 100, 120, 60, 20, 5, 40, 1){

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




