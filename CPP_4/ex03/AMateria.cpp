/* **************************************************************************** */
/*                                                                      .       */
/*   AMateria.cpp                                                        / V\     */
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


#include "AMateria.hpp"


AMateria::AMateria(){
	this->_xp = 0;
	this->type = "No type";
}

AMateria::AMateria(const std::string &type){
	this->_xp = 0;
	this->type = type;
}

AMateria::AMateria(const AMateria &copy){
	operator=(copy);
}


AMateria &AMateria::operator=(const AMateria &assign){
	if (this != &assign){
		this->_xp = assign.getXP();
		this->type = assign.getType();
	}
	return *this;
}

AMateria::~AMateria(){

}

std::string const &AMateria::getType() const{
	return this->type;
}

unsigned int AMateria::getXP() const{
	return this->_xp;
}

void AMateria::use(ICharacter &target){
	this->_xp += 10;

}

void AMateria::setType(const std::string &type){
	AMateria::type = type;
}

void AMateria::setXp(unsigned int xp){
	_xp = xp;
}

