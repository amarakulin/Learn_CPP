/* **************************************************************************** */
/*                                                                      .       */
/*   Enemy.cpp                                                        / V\     */
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


#include "Enemy.hpp"

Enemy::Enemy(){
	setParamConstructor(0, "No type");
}

Enemy::Enemy(int hp, const std::string &type){
	setParamConstructor(hp, type);
}

Enemy::Enemy(const Enemy &copy){
	operator=(copy);
}

Enemy &Enemy::operator=(const Enemy &assign){
	if (this != &assign){
		this->setHp(assign.getHp());
		this->setType(assign.getType());
	}
	return *this;
}

Enemy::~Enemy(){

}

void Enemy::setParamConstructor(int hp, std::string const & type){
	std::cout << BOLDGREEN "Enemy constructor" RESET << std::endl;
	setHp(hp);
	setType(type);
}

int Enemy::getHp() const{
	return _hp;
}

void Enemy::setHp(int hp){
	_hp = hp;
}

const std::string &Enemy::getType() const{
	return _type;
}

void Enemy::setType(const std::string &type){
	_type = type;
}

void Enemy::takeDamage(int damage){
	if (damage > 0 ){
		this->_hp -= damage;
		if (this->_hp < 0){
			this->_hp = 0;
		}
	}
	std::cout << BOLDGREEN "Enemy got " << damage << " damage"
				". Now he has " << this->_hp << " HP."
			RESET << std::endl;
}
