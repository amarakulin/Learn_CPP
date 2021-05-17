/* **************************************************************************** */
/*                                                                      .       */
/*   ISquad.hpp.h                                                        / V\     */
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


#ifndef CPP_4_ISQUAD_HPP
#define CPP_4_ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad{
public:
	virtual ~ISquad(){}
	virtual int getCount const = 0;
	virtual ISpaceMarine* getUnit(int idxUnit) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif
