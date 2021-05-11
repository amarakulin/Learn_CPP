/* **************************************************************************** */
/*                                                                      .       */
/*   ZombieEvent.cpp.cc                                                        / V\     */
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


#include "ZombieEvent.hpp"

std::string ZombieEvent::setZombieType(){
	std::string setTypes[5] = {"A", "B", "C", "D", "F"};
	int index = std::rand() % 5;
	return setTypes[index];
}

std::string ZombieEvent::setZombieName(){
	std::string setNames[5] = {"Rick", "Nash", "Big", "Fig", "Pig"};
	int index = rand() % 5;
	return setNames[index];
}

Zombie *ZombieEvent::newZombie(std::string name){
	Zombie *newZombie = new Zombie();
	newZombie->setName(name);
	newZombie->setType(setZombieType());
	return newZombie;
}

void ZombieEvent::randomChump(){
	Zombie newZombie;
	newZombie.setName(setZombieName());
	newZombie.setType(setZombieType());
	newZombie.announce();
}

