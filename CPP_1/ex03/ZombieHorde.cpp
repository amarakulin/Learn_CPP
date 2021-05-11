/* **************************************************************************** */
/*                                                                      .       */
/*   ZombieHorde.cpp.cc                                                        / V\     */
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


#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int numberZombies)
{
	Zombie **zombieHorde = new Zombie *[numberZombies];
	for (int i = 0; i < numberZombies; i++)
	{
		zombieHorde[i] = new Zombie();
		zombieHorde[i]->setName(ZombieHorde::setZombieName());
		zombieHorde[i]->setType(ZombieHorde::setZombieType());
	}
	for (int i = 0; i < numberZombies; i++){
		std::cout << std::to_string(i) + ")";
		zombieHorde[i]->announce();
	}
	for (int i = 0; i < numberZombies; i++){
		delete zombieHorde[i];
	}
	delete[] zombieHorde;
}

std::string ZombieHorde::setZombieType(){
	std::string setTypes[5] = {"A", "B", "C", "D", "F"};
	int index = std::rand() % 5;
	return setTypes[index];
}

std::string ZombieHorde::setZombieName(){
	std::string setNames[5] = {"Rick", "Nash", "Big", "Fig", "Pig"};
	int index = rand() % 5;
	return setNames[index];
}
