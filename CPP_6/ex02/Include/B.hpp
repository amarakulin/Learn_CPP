/* **************************************************************************** */
/*                                                                      .       */
/*   B.hpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/21/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_6_B_HPP
#define CPP_6_B_HPP

#include "Base.hpp"

class B : public Base{
public:
	B();
	B(B const &copy);
	B& operator=(const B &assign);
	~B();

	const std::string &getName() const;

private:
	std::string _name;
};


#endif
