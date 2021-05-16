/* **************************************************************************** */
/*                                                                      .       */
/*   SuperMutant.hpp                                                        / V\     */
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


#ifndef CPP_4_SUPERMUTANT_HPP
#define CPP_4_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : virtual public Enemy{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &copy);
	SuperMutant& operator=(const SuperMutant &assign);
	~SuperMutant();
	void takeDamage(int damage);

private:
	const int valueArmor = 3;
};


#endif
