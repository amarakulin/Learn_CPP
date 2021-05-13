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
	const int _maxHitPoints = 100;
	const int _maxEnergyPoints = 100;
	const int _meleeAttackDamage = 30;
	const int _rangeAttackDamage = 20;
	const int _armorDamageReduction = 5;

public:
	FragTrap(const std::string &name);

	~FragTrap();

	std::string name;
	int hitPoints = 100;
	int energyPoints = 100;
	int level = 1;

	void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};


#endif
