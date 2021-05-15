/* **************************************************************************** */
/*                                                                      .       */
/*   ScavTrap.hpp                                                      / V\     */
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


#ifndef CPP_3_SCAVTRAP_HPP
#define CPP_3_SCAVTRAP_HPP

#include <iostream>

class ScavTrap{
private:
	static const int _maxHitPoints = 100;
	static const int _maxEnergyPoints = 50;
	static const int _meleeAttackDamage = 20;
	static const int _rangeAttackDamage = 15;
	static const int _armorDamageReduction = 3;
	static const int _valueEnergyLoss = 40;

public:
	ScavTrap();
	ScavTrap(const std::string &name);
	~ScavTrap();
	ScavTrap(const ScavTrap &copy);

	std::string name;
	int hitPoints;
	int energyPoints;
	int level;
	int measureIndividuality;

	void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
	ScavTrap &operator=(const ScavTrap &assign);

};

#endif
