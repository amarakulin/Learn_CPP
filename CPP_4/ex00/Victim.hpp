/* **************************************************************************** */
/*                                                                      .       */
/*   Victim.hpp                                                        / V\     */
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


#ifndef CPP_4_VICTIM_HPP
#define CPP_4_VICTIM_HPP

#include <iostream>

class Victim{
public:
	Victim();
	Victim(std::string name);
	Victim(Victim const &copy);
	Victim& operator=(const Victim &assign);
	~Victim();

	const std::string &getName() const;
	void setName(const std::string &name);
	void getPolymorphed() const;

private:
	std::string _name;
	void setParamConstructor(std::string name);
};

std::ostream &operator<<(std::ostream &out, const Victim &victim);

#endif
