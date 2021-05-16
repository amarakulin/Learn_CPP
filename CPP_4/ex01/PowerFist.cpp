/* **************************************************************************** */
/*                                                                      .       */
/*   PowerFist.cpp                                                        / V\     */
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


#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){
}

PowerFist::PowerFist(const PowerFist &copy){
	operator=(copy);
}

PowerFist &PowerFist::operator=(const PowerFist &assign){
	if (this != &assign){
		AWeapon::operator=(assign);
	}
	return *this;
}

PowerFist::~PowerFist(){

}

void PowerFist::attack() const{
	std::cout << BOLDGREEN "* pschhh... SBAM! *" RESET << std::endl;
}
