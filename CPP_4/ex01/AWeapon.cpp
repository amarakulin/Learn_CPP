/* **************************************************************************** */
/*                                                                      .       */
/*   AWeapon.cpp                                                        / V\     */
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


#include "AWeapon.hpp"

AWeapon::AWeapon(){
	setName("No name");
	setApcost(0);
	setDamage(0);
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage){
	setName(name);
	setApcost(apcost);
	setDamage(damage);
}

AWeapon::AWeapon(const AWeapon &copy){
	operator=(copy);
}

AWeapon &AWeapon::operator=(const AWeapon &assign){
	if (this != &assign){
		this->_name = assign.getName();
		this->_apcost = assign.getApcost();
		this->_damage = assign.getDamage();
	}
	return *this;
}

AWeapon::~AWeapon(){}

const std::string &AWeapon::getName() const{
	return _name;
}

void AWeapon::setName(const std::string &name){
	AWeapon::_name = name;
}

int AWeapon::getApcost() const{
	return _apcost;
}

void AWeapon::setApcost(int apcost){
	AWeapon::_apcost = apcost;
}

int AWeapon::getDamage() const{
	return _damage;
}

void AWeapon::setDamage(int damage){
	AWeapon::_damage = damage;
}
