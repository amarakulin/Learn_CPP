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

int main(){
	FragTrap Rick("Rick");
	FragTrap CopyRick (Rick);
	FragTrap Nick("Nick");
	ScavTrap Nate("Nate");
	ScavTrap CopyNate (Nate);
	ScavTrap Fred("Fred");

	std::srand(std::time(NULL));
	Rick.meleeAttack("attacks something");
	Rick.rangeAttack("attacks a box");
	Rick.takeDamage(50);
	Rick.vaulthunter_dot_exe("TARGET");
	Rick.vaulthunter_dot_exe("TARGET1");
	Rick.vaulthunter_dot_exe("TARGET2");
	Rick.vaulthunter_dot_exe("TARGET3");
	Rick.vaulthunter_dot_exe("TARGET4");
	Rick.vaulthunter_dot_exe("TARGET5");
	Rick.beRepaired(20);
	Rick.takeDamage(90);
	Rick.takeDamage(90);
	Nick = Rick;
	Nick.vaulthunter_dot_exe("Niks target");
	Nick.takeDamage(90);
	CopyRick.takeDamage(90);
	std::cout << "++++++++++++++++++++++++" << std::endl;
	Nate.meleeAttack("attacks something");
	Nate.rangeAttack("attacks a box");
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

	return (0);
}
