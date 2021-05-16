/* **************************************************************************** */
/*                                                                      .       */
/*   PlasmaRifle.hpp                                                        / V\     */
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


#ifndef CPP_4_PLASMARIFLE_HPP
#define CPP_4_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &copy);
	PlasmaRifle& operator=(const PlasmaRifle &assign);
	~PlasmaRifle();
	virtual void attack() const;
};


#endif
