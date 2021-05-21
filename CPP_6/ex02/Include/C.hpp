/* **************************************************************************** */
/*                                                                      .       */
/*   C.hpp                                                        / V\     */
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


#ifndef CPP_6_C_HPP
#define CPP_6_C_HPP

#include "Base.hpp"

class C : public Base{
public:
	C();
	C(C const &copy);
	C& operator=(const C &assign);
	~C();

	const std::string &getName() const;

private:
	std::string _name;
};


#endif //CPP_6_C_HPP
