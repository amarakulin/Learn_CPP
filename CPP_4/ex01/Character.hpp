/* **************************************************************************** */
/*                                                                      .       */
/*   Character.hpp                                                        / V\     */
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


#ifndef CPP_4_CHARACTER_HPP
#define CPP_4_CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{
public:
	Character();
	Character(std::string const & name);
	Character(Character const &copy);
	Character& operator=(const Character &assign);
	~Character();

	const std::string &getName() const;
	int getActionPoints() const;
	AWeapon *getWeapon() const;
	void setName(const std::string &_name);
	void setActionPoints(int _actionPoints);
	void setWeapon(AWeapon *_weapon);

	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);

private:
	std::string _name;
	int _actionPoints;
	AWeapon *_weapon;
	const int _apToRecover = 10;
};


#endif
