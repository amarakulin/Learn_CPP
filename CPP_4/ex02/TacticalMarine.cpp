/* **************************************************************************** */
/*                                                                      .       */
/*   TacticalMarine.cpp.cc                                                        / V\     */
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


#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() : ISpaceMarine(){
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy){
	operator=(copy);
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &assign){
	return *this;
}

TacticalMarine::~TacticalMarine(){
	std::cout << "Aaargh..." << std::endl;
}

void TacticalMarine::battleCry() const{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const{
	return (new TacticalMarine(*this));
}
