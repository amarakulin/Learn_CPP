/* **************************************************************************** */
/*                                                                      .       */
/*   Enemy.hpp                                                        / V\     */
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


#ifndef CPP_4_ENEMY_HPP
#define CPP_4_ENEMY_HPP

#include "iostream"

class Enemy{
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &copy);
	Enemy& operator=(const Enemy &assign);
	virtual ~Enemy();

	int getHp() const;
	const std::string &getType() const;
	void setHp(int hp);
	void setType(const std::string &type);

	virtual void takeDamage(int damage);

protected:
	void setParamConstructor(int hp, std::string const & type);

private:
	int _hp;
	std::string _type;
};


#endif