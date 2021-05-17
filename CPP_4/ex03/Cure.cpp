/* **************************************************************************** */
/*                                                                      .       */
/*   Cure.cpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/17/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "Cure.hpp"

Cure::Cure() : AMateria(){
	this->setType("cure");
}

Cure::Cure(const Cure &copy){
	operator=(copy);
}

Cure &Cure::operator=(const Cure &assign){
	if (this != &assign){
		this->setXp(assign.getXP());
		this->setType(assign.getType());
	}
	return *this;
}

Cure::~Cure(){

}

std::string const &Cure::getType() const{
	return AMateria::getType();
}

unsigned int Cure::getXP() const{
	return AMateria::getXP();
}

AMateria *Cure::clone() const{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target){
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
