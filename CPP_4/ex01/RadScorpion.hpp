/* **************************************************************************** */
/*                                                                      .       */
/*   RadScorpion.hpp                                                        / V\     */
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


#ifndef CPP_4_RADSCORPION_HPP
#define CPP_4_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : virtual public Enemy{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &copy);
	RadScorpion& operator=(const RadScorpion &assign);
	~RadScorpion();
//	void takeDamage(int damage);
};


#endif
