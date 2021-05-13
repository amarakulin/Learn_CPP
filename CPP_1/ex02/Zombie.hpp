/* **************************************************************************** */
/*                                                                      .       */
/*   Zombie.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/11/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_1_ZOMBIE_HPP
#define CPP_1_ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
	std::string name;
	std::string type;

public:
	const std::string &getName() const;
	void setName(const std::string &name);
	const std::string &getType() const;
	void setType(const std::string &type);
	void announce();
};


#endif //CPP_1_ZOMBIE_HPP
