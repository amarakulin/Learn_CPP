/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp                                                        / V\     */
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

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Otter.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Sorcerer noName;
	Victim jim("Jimmy");
	Peon joe("Joe");
	Otter otto("Otto");
	std::cout << robert << jim << joe << otto;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(otto);
	noName.polymorph(otto);
	return 0;
}
