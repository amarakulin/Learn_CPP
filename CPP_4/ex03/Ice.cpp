/* **************************************************************************** */
/*                                                                      .       */
/*   Ice.cpp                                                        / V\     */
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


#include "Ice.hpp"

Ice::Ice() : AMateria(){
	this->setType("ice");
}

Ice::Ice(const Ice &copy){
	operator=(copy);
}

Ice &Ice::operator=(const Ice &assign){
	if (this != &assign){
		this->setXp(assign.getXP());
		this->setType(assign.getType());
	}
	return *this;
}

Ice::~Ice(){

}

std::string const &Ice::getType() const{
	return AMateria::getType();
}

unsigned int Ice::getXP() const{
	return AMateria::getXP();
}

AMateria *Ice::clone() const{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target){
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}
