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
		this->name = assign.getName();
		this->apcost = assign.getApcost();
		this->damage = assign.getDamage();
	}
	return *this;
}

AWeapon::~AWeapon(){}

const std::string &AWeapon::getName() const{
	return name;
}

void AWeapon::setName(const std::string &name){
	AWeapon::name = name;
}

int AWeapon::getApcost() const{
	return apcost;
}

void AWeapon::setApcost(int apcost){
	AWeapon::apcost = apcost;
}

int AWeapon::getDamage() const{
	return damage;
}

void AWeapon::setDamage(int damage){
	AWeapon::damage = damage;
}
