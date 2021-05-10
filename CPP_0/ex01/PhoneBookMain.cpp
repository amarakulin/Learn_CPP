/* **************************************************************************** */
/*                                                                      .       */
/*   PhoneBookMain.cpp                                                 / V\     */
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


#include "PhoneBookMain.hpp"
#include "Contact.hpp"
#include "Search.hpp"

int main()
{
	Contact contacts[8];
	Search search = Search();
	for (int i = 0; i < 2; i++){
		contacts[i].setData("First", "Last", "Nick", "login", "postal", "email", "birthday", "favoriteMeal", "color", "secret", 1);
	}
	for (int i = 0; i < 2; i++){
		search.printContactByIndex(reinterpret_cast<Contact &&>(contacts), i);
	}

	return (0);
}