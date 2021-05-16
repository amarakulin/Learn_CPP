/* **************************************************************************** */
/*                                                                      .       */
/*   PlasmaRifle.cpp                                                        / V\     */
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


#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy){
	operator=(copy);
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &assign){
	if (this != &assign){
		AWeapon::operator=(assign);
	}
	return *this;
}

PlasmaRifle::~PlasmaRifle(){

}

void PlasmaRifle::attack(){
	std::cout << BOLDGREEN "* piouuu piouuu piouuu *" RESET << std::endl;
}
