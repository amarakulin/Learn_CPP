/* **************************************************************************** */
/*                                                                      .       */
/*   A.hpp                                                        / V\     */
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


#ifndef CPP_6_A_HPP
#define CPP_6_A_HPP

#include "Base.hpp"

class A : public Base{
public:
	A();
	A(A const &copy);
	A& operator=(const A &assign);
	~A();

	const std::string &getName() const;

private:
	std::string _name;
};


#endif
