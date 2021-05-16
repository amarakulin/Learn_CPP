/* **************************************************************************** */
/*                                                                      .       */
/*   Character.cpp                                                        / V\     */
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


#include "Character.hpp"


Character::Character(){

}

Character::Character(const std::string &name){
	this->_name = name;
	this->_actionPoints = 40;
	this->_weapon = nullptr;
}

Character::Character(const Character &copy){
	operator=(copy);
}

Character &Character::operator=(const Character &assign){
	if (this != &assign){
		this->_name = assign.getName();
		this->_actionPoints = assign.getActionPoints();
		this->_weapon = assign.getWeapon();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Character &character){
	std::string nameWeapon;
	if (character.getWeapon() == nullptr){
		nameWeapon = "unarmed";
	}
	else{
		nameWeapon = character.getWeapon()->getName();
	}
	out << BOLDGREEN << character.getName() + " has "
						<< character.getActionPoints()
						<< " AP and wields a "
						<< nameWeapon +
						RESET << std::endl;
	return out;
}

Character::~Character(){

}

const std::string &Character::getName() const{
	return _name;
}

void Character::setName(const std::string &name){
	Character::_name = name;
}

int Character::getActionPoints() const{
	return _actionPoints;
}

void Character::setActionPoints(int actionPoints){
	Character::_actionPoints = actionPoints;
}

AWeapon *Character::getWeapon() const{
	return _weapon;
}

void Character::setWeapon(AWeapon *weapon){
	Character::_weapon = weapon;
}

void Character::recoverAP(){
	this->_actionPoints += _apToRecover;
	if (this->_actionPoints > 40){
		this->_actionPoints = 40;
	}
}

void Character::attack(Enemy *enemy){
	if (this->_weapon == nullptr){
		std::cout << BOLDGREEN << this->_name << " has " <<
				  this->_actionPoints << " AP and is unarmed" <<
				  RESET << std::endl;
		return;
	}
	if (this->_weapon->getApcost() <= this->_actionPoints){
		enemy->takeDamage(this->_weapon->getDamage());
		this->_weapon->attack();
		this->_actionPoints -= this->_weapon->getApcost();
		std::cout << BOLDGREEN << this->_name <<
				  " attacks " << enemy->getType() <<
				  " with a " << this->_weapon->getName() <<
				  RESET << std::endl;
		if (enemy->getHp() <= 0){
			delete enemy;
		}
	}
	else{
		std::cout << BOLDGREEN << this->_name <<
				  " CAN'T attacks " << enemy->getType() <<
				  RESET << std::endl;
	}
}

void Character::equip(AWeapon *weapon){
	setWeapon(weapon);
}
