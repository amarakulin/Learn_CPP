/* **************************************************************************** */
/*                                                                      .       */
/*   AssaultTerminator.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/16/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_4_ASSAULTTERMINATOR_HPP
#define CPP_4_ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : virtual public ISpaceMarine{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &copy);
	AssaultTerminator& operator=(const AssaultTerminator &assign);
	~AssaultTerminator();

	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif