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
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap();
	ScavTrap(const std::string &name1);
	~ScavTrap();
	ScavTrap(const ScavTrap &copy);

	std::string name;
	int hitPoints;
	int energyPoints;
	int level;
	int measureIndividuality;

	void challengeNewcomer();
	ScavTrap &operator=(const ScavTrap &assign);

};

#endif
