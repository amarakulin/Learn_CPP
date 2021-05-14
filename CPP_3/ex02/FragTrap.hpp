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
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap(const std::string &name1, const std::string &name);

	~FragTrap();
	FragTrap(const ClapTrap &copy1, const FragTrap &copy);
	std::string name;
	int hitPoints;
	int energyPoints;
	int level;

	void vaulthunter_dot_exe(std::string const & target);
	void operator=(const FragTrap &assign);

};


#endif
