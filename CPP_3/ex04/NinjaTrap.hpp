/* **************************************************************************** */
/*                                                                      .       */
/*   NinjaTrap.hpp.h                                                        / V\     */
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


#ifndef CPP_3_NINJATRAP_HPP
#define CPP_3_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class NinjaTrap : virtual public ClapTrap{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &copy);
	NinjaTrap& operator=(const NinjaTrap &assign);
	~NinjaTrap();

	void ninjaShoebox(const ClapTrap &obj);
	void ninjaShoebox(const FragTrap &obj);
	void ninjaShoebox(const ScavTrap &obj);
	void ninjaShoebox(const NinjaTrap &obj);

};


#endif
