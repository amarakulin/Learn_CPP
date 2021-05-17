/* **************************************************************************** */
/*                                                                      .       */
/*   Squad.hpp.h                                                        / V\     */
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


#ifndef CPP_4_SQUAD_HPP
#define CPP_4_SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

typedef struct s_lstUnits{
	ISpaceMarine			*unit;
	struct s_lstUnits		*next;
}				t_lstUnits;

class Squad : virtual public ISquad{
public:
	Squad();
	Squad(Squad const &copy);
	Squad& operator=(const Squad &assign);
	~Squad();

	int getCount() const;
	ISpaceMarine* getUnit(int idxUnit) const;
	int push(ISpaceMarine *newUnit);

private:
	t_lstUnits *lstUnits;

	t_lstUnits *lstNew(ISpaceMarine *unit);
	void deleteLstUnit(t_lstUnits *lst);
	void copyLst(t_lstUnits *lst);
};


#endif