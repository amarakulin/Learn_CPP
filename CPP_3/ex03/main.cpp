/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp.c                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/13/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main(){
	ClapTrap WeakRobot("WeakRobot", 2, 4, 5, 6, 0, 2, 2);
	FragTrap Rick("Rick");
	FragTrap CopyRick (Rick);
	FragTrap Nick("Nick");
	ScavTrap Nate("Nate");
	ScavTrap CopyNate (Nate);
	ScavTrap Fred("Fred");
	NinjaTrap Ninja("Ninja First");
	NinjaTrap CopyNinja (Ninja);
	NinjaTrap Ninja2("Ninja Second");

	std::srand(std::time(NULL));
	WeakRobot.rangeAttack("candy");
	WeakRobot.meleeAttack("pankakes");
	WeakRobot.takeDamage(1);
	WeakRobot.beRepaired(20);
	std::cout << "+++++++++++FragTrap+++++++++++++" << std::endl;
	Rick.meleeAttack(" something");
	Rick.rangeAttack(" a box");
	Rick.takeDamage(50);
	Rick.vaulthunter_dot_exe("TARGET");
	Rick.vaulthunter_dot_exe("TARGET1");
	Rick.vaulthunter_dot_exe("TARGET2");
	Rick.vaulthunter_dot_exe("TARGET3");
	Rick.vaulthunter_dot_exe("TARGET4");
	Rick.vaulthunter_dot_exe("TARGET5");
	Rick.beRepaired(20);
	Rick.takeDamage(90);
	Nick = Rick;
	Nick.vaulthunter_dot_exe("Niks target");
	Nick.takeDamage(90);
	CopyRick.takeDamage(90);
	std::cout << "+++++++++++ScavTrap+++++++++++++" << std::endl;
	Nate.meleeAttack("something");
	Nate.rangeAttack("a box");
	Nate.takeDamage(50);
	Nate.challengeNewcomer();
	Nate.challengeNewcomer();
	Nate.challengeNewcomer();
	Nate.challengeNewcomer();
	Nate.challengeNewcomer();
	Nate.challengeNewcomer();
	Nate.beRepaired(20);
	Nate.takeDamage(90);
	Nate.takeDamage(90);
	Fred = Nate;
	Fred.challengeNewcomer();
	Fred.takeDamage(90);
	CopyNate.takeDamage(90);

	std::cout << "+++++++++NINJA+++++++++++++++" << std::endl;
	Ninja.meleeAttack(" something");
	Ninja.rangeAttack(" a box");
	Ninja.takeDamage(50);
	Ninja.ninjaShoebox(WeakRobot);
	Ninja.ninjaShoebox(Rick);
	Ninja.ninjaShoebox(Nate);
	Ninja.ninjaShoebox(Ninja);
	Ninja.ninjaShoebox(Ninja2);
	Ninja.beRepaired(20);
	Ninja.takeDamage(90);
	Ninja2 = Ninja;
	Ninja2.ninjaShoebox(Fred);
	Ninja2.takeDamage(90);
	CopyNinja.takeDamage(90);

	return (0);
}
