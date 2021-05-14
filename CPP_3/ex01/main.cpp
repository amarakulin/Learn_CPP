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

int main(){
	FragTrap Rick("Rick");
	FragTrap CopyRick (Rick);
	FragTrap Nick("Nick");

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

	return (0);
}
