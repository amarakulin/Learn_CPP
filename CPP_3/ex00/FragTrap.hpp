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
	static const int _maxHitPoints = 100;
	static const int _maxEnergyPoints = 100;
	static const int _meleeAttackDamage = 30;
	static const int _rangeAttackDamage = 20;
	static const int _armorDamageReduction = 5;
	static const int _valueEnergyLoss = 25;

public:
	FragTrap(const std::string &name);

	~FragTrap();
	FragTrap(const FragTrap &copy);
	std::string name;
	int hitPoints;
	int energyPoints;
	int level;

	void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	void operator=(const FragTrap &assign);

};


#endif
