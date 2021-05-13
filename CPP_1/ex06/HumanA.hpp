/* **************************************************************************** */
/*                                                                      .       */
/*   HumanA.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/12/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_1_HUMANA_HPP
#define CPP_1_HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
public:
	HumanA(const std::string &name, Weapon &weapon);

	void attack() const;

private:
	Weapon &weapon;
	std::string name;
};


#endif //CPP_1_HUMANA_HPP
