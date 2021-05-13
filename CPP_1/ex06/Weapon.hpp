/* **************************************************************************** */
/*                                                                      .       */
/*   Weapon.hpp.h                                                        / V\     */
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


#ifndef CPP_1_WEAPON_HPP
#define CPP_1_WEAPON_HPP

#include <iostream>

class Weapon{
public:
	Weapon(const std::string &type);

	std::string type;

	void setType(const std::string &type);
	const std::string &getType() const;
};


#endif
