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
#include "PhoneBook.hpp"

class Add{
public:
	static bool executeCommandAdd(Contact contacts[8], int indexContact,
								  int highestIndexContact);

private:
	static void askingToFillContact(Contact contact[8], int index);
	static std::string askStringConstructor(const std::string& askVariable);
	static long askLongConstructor(const std::string& askVariable);


};


#endif
