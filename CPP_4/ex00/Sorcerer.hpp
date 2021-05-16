/* **************************************************************************** */
/*                                                                      .       */
/*   Sorcerer.hpp                                                        / V\     */
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


#ifndef CPP_4_SORCERER_HPP
#define CPP_4_SORCERER_HPP

#include <iostream>

class Sorcerer{
public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &copy);
	Sorcerer& operator=(const Sorcerer &assign);
	~Sorcerer();

	const std::string &getName() const;
	const std::string &getTitle() const;
	void setName(const std::string &name);
	void setTitle(const std::string &title);

private:
	std::string _name;
	std::string _title;
	void setParamConstructor(std::string name, std::string title);
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif
