/* **************************************************************************** */
/*                                                                      .       */
/*   Search.cpp.cc                                                     / V\     */
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


#include "Search.hpp"

void Search::printContactByIndex(Contact contact[8], int index){
	std::string rowToPrint;
	rowToPrint = to_string(index);
	rowToPrint += "|" + getCorrectString(contact[i].firstName)
				+ "|" + getCorrectString(contact[i].lastName)
				+ "|" + getCorrectString(contact[i].nickname)
				+ "|";
	std::cout << rowToPrint;
}

std::string Search::getCorrectString(std::string strToTruncate)
{
	std::string	spaceString;
	int			numberSpaces;
	int			width = 10;

	if (strToTruncate.length() > width){
		return strToTruncate.substr(0, width - 1) + "."
	}
	else{
		numberSpaces = width - static_cast <int> (strToTruncate.length());
		spaceString = std::string(numberSpaces," ");
		return strToTruncate + spaceString;
	}
	return strToTruncate;
}

void Search::printAllContacts(Contact *contacts)
{

}

void Search::printAllContacts(Contact *, contacts){
}
