/* **************************************************************************** */
/*                                                                      .       */
/*   HumanB.hpp.h                                                        / V\     */
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


#ifndef CPP_1_HUMANB_HPP
#define CPP_1_HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
public:
	HumanB(const std::string &name);

	void attack() const;
	void setWeapon(Weapon &weapon);

private:
	Weapon *weapon;
	std::string name;
};


#endif //CPP_1_HUMANB_HPP
