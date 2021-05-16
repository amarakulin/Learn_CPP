/* **************************************************************************** */
/*                                                                      .       */
/*   RadScorpion.cpp                                                        / V\     */
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


#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion"){
	std::cout << BOLDBLUE "* click click click *" RESET << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy){
	operator=(copy);
}

RadScorpion &RadScorpion::operator=(const RadScorpion &assign){
	if (this != &assign){
		Enemy::operator=(assign);
	}
	return *this;
}

RadScorpion::~RadScorpion(){
	std::cout << BOLDRED "* SPROTCH *" RESET << std::endl;
}

