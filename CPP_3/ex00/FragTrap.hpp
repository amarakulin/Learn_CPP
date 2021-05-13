/* **************************************************************************** */
/*                                                                      .       */
/*   FragTrap.hpp.h                                                        / V\     */
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


#ifndef CPP_3_FRAGTRAP_HPP
#define CPP_3_FRAGTRAP_HPP

#include <iostream>

class FragTrap{
private:
	const int maxHitPoints = 100;
	const int maxEnergyPoints = 100;
	const int meleeAttackDamage = 30;
	const int rangeAttackDamage = 20;
	const int armorDamageReduction = 5;

public:
	std::string name;
	int hitPoints = 100;
	int energyPoints = 100;
	int level = 1;

	void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
};


#endif
