/* **************************************************************************** */
/*                                                                      .       */
/*   Character.cpp                                                        / V\     */
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


#include "Character.hpp"

Character::Character() : ICharacter(){
	this->_name = "No name";
	for (int i = 0; i < 4; i++){
		this->_materials[i] = nullptr;
	}
}


Character::Character(std::string name){
	this->_name = name;
	for (int i = 0; i < 4; i++){
		this->_materials[i] = nullptr;
	}
}

Character::Character(const Character &copy){
	operator=(copy);
}

Character &Character::operator=(const Character &assign){
	if (this != &assign){
		deleteCharacters();
		this->_name = assign._name;
		for(int i = 0; i < 4; i++){
			this->_materials[i] = assign._materials[i];
		}
	}
	return *this;
}

Character::~Character(){
	deleteCharacters();
}

std::string const &Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria *m){
	for (int i = 0; i < 4; i++){
		if (this->_materials[i] == nullptr){
			this->_materials[i] = m;
			std::cout << "Equip " << m->getType() << std::endl;
			return;
		}
	}
}

void Character::unequip(int idx){
	for (int i = 0; i < 4; i++){
		if (this->_materials[i] != nullptr && i == idx){
			this->_materials[i] = nullptr;
			std::cout << "Unequip " << this->_materials[i]->getType() << std::endl;
			return;
		}
	}
}

void Character::use(int idx, ICharacter &target){
	for (int i = 0; i < 4; i++){
		if (this->_materials[i] != nullptr && i == idx){
			this->_materials[i]->use(target);
			return;
		}
	}
}

void Character::deleteCharacters(){
	int i = 0;
	while(i < 4 && this->_materials[i] != nullptr){
		delete this->_materials[i];
		i++;
	}
}
