/* **************************************************************************** */
/*                                                                      .       */
/*   ClapTrap.hpp.h                                                        / V\     */
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


#ifndef CPP_3_CLAPTRAP_HPP
#define CPP_3_CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
protected:
	int maxHitPoints;
	int maxEnergyPoints;
	int meleeAttackDamage;
	int rangeAttackDamage;
	int armorDamageReduction;
	int valueEnergyLoss;
	int startLevel;

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	~ClapTrap();
	ClapTrap(const ClapTrap &copy);

	std::string name;
	int hitPoints;
	int energyPoints;
	int level;

	virtual void rangeAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	ClapTrap &operator=(const ClapTrap &assign);
};


#endif
