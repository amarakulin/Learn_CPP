/* **************************************************************************** */
/*                                                                      .       */
/*   Character.hpp                                                        / V\     */
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


#ifndef CPP_4_CHARACTER_HPP
#define CPP_4_CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter{
public:
	Character();
	Character(std::string name);
	Character(Character const &copy);
	Character& operator=(const Character &assign);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string _name;
	AMateria *_materials[4];
	void deleteCharacters();
};


#endif