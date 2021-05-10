/* **************************************************************************** */
/*                                                                      .       */
/*   Search.hpp                                                        / V\     */
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


#ifndef CPP_0_SEARCH_HPP
#define CPP_0_SEARCH_HPP


#include <string>
#include "Contact.hpp"

class Search
{
public:
	std::string getCorrectString(std::string strToTruncate);
	void printContactByIndex(Contact contact, int index);
	void		printAllContacts(Contact contacts[8]);
};


#endif //CPP_0_SEARCH_HPP
