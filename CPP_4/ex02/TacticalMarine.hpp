/* **************************************************************************** */
/*                                                                      .       */
/*   TacticalMarine.hpp.h                                                        / V\     */
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


#ifndef CPP_4_TACTICALMARINE_HPP
#define CPP_4_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : virtual public ISpaceMarine{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &copy);
	TacticalMarine& operator=(const TacticalMarine &assign);
	~TacticalMarine();

	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif