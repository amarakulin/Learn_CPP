/* **************************************************************************** */
/*                                                                      .       */
/*   ZombieHorde.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/11/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_1_ZOMBIEHORDE_HPP
#define CPP_1_ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde{
public:
	ZombieHorde(int numberZombies);
	std::string setZombieType();
	std::string setZombieName();

};


#endif
