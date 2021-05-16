/* **************************************************************************** */
/*                                                                      .       */
/*   PowerFist.hpp                                                        / V\     */
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


#ifndef CPP_4_POWERFIST_HPP
#define CPP_4_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon{
public:
	PowerFist();
	PowerFist(PowerFist const &copy);
	PowerFist& operator=(const PowerFist &assign);
	~PowerFist();
	virtual void attack() const;
};

#endif