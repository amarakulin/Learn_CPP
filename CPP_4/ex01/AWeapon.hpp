/* **************************************************************************** */
/*                                                                      .       */
/*   AWeapon.hpp                                                        / V\     */
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


#ifndef CPP_4_AWEAPON_HPP
#define CPP_4_AWEAPON_HPP

#include "iostream"
#include "Colors.hpp"

class AWeapon{
public:
	AWeapon();
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &copy);
	AWeapon& operator=(const AWeapon &assign);
	virtual ~AWeapon();
	
	virtual void attack() const = 0;
	void setName(const std::string &name);
	void setApcost(int apcost);
	void setDamage(int damage);
	const std::string &getName() const;
	int getApcost() const;
	int getDamage() const;

private:
	std::string _name;
	int _apcost;
	int _damage;
};


#endif
