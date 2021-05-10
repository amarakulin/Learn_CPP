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

#include "General.hpp"

class Search
{
public:
	static int getIndexOfContact();
	static std::string getCorrectString(std::string str);
	static void printShortContactByIndex(Contact *contact, int index);
	static void printFullContactByIndex(Contact *contact, int index);
};

#endif
