/* **************************************************************************** */
/*                                                                      .       */
/*   SuperTrap.hpp.h                                                        / V\     */
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


#ifndef CPP_3_SUPERTRAP_HPP
#define CPP_3_SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap{
public:
	SuperTrap();
	SuperTrap(const std::string &name);
	SuperTrap(SuperTrap const &copy);
	SuperTrap& operator=(const SuperTrap &assign);
	~SuperTrap();

	void rangeAttack(std::string const &target);
	void meleeAttack(std::string const &target);

};


#endif