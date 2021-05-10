/* **************************************************************************** */
/*                                                                      .       */
/*   Add.hpp                                                       / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/10/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_0_ADD_HPP
#define CPP_0_ADD_HPP
#include "General.hpp"

class Add{
public:
	static void askingToFillContact(Contact contact);
	static std::string askStringConstructor(const std::string& askVariable);
	static int askIntConstructor(const std::string& askVariable);
};


#endif
