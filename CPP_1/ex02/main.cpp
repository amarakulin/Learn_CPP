/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp.c                                                        / V\     */
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

int main(){
	std::srand(std::time(NULL));
	Zombie zombieFromMain;
	ZombieEvent zombieEvent;
	zombieFromMain.setName("ZombieFromMain");
	zombieFromMain.setType(zombieEvent.setZombieType());
	Zombie *heapZombie = zombieEvent.newZombie("heapZombie");
	heapZombie->announce();
	zombieFromMain.announce();
	zombieEvent.randomChump();
	delete heapZombie;
//	while(1);
	return (0);
}
