/* **************************************************************************** */
/*                                                                      .       */
/*   MateriaSource.cpp                                                        / V\     */
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


#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++){
		this->_materials[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy){
	operator=(copy);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign){
	if (this != &assign){
		deleteMaterials();
		for(int i = 0; i < 4; i++){
			this->_materials[i] = assign._materials[i];
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(){

}

void MateriaSource::learnMateria(AMateria *m){
	for (int i = 0; i < 4; i++){
		if (this->_materials[i] == nullptr){
			this->_materials[i] = m;
			std::cout << "learnMateria " << this->_materials[i]->getType() << std::endl;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type){
	for (int i = 0; i < 4; i++){
		if (this->_materials[i]->getType() == type){
			std::cout << "createMateria " << this->_materials[i]->getType() << std::endl;
			return this->_materials[i]->clone();
		}
	}
	return 0;
}


void MateriaSource::deleteMaterials(){
	int i = 0;
	while(i < 4 && this->_materials[i] != nullptr){
		delete this->_materials[i];
		i++;
	}
}