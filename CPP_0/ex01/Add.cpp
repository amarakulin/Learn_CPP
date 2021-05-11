/* **************************************************************************** */
/*                                                                      .       */
/*   Add.cpp                                                       / V\     */
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


#include "Include/PhoneBook.hpp"

std::string Add::askStringConstructor(const std::string& askVariable){
	std::string resultVariable;
	std::cout << "Write " + askVariable + ": ";
	std::cin >> resultVariable;
	return resultVariable;
}

int Add::askIntConstructor(const std::string& askVariable)
{
	int resultVariable;

	std::cout << "Write " + askVariable + ": ";
	resultVariable = getIntFromInput();
	return resultVariable;
}

void Add::askingToFillContact(Contact contact[8], int index)
{
	contact[index].setFirstName(askStringConstructor("first name"));
	contact[index].setLastName(askStringConstructor("last name"));
	contact[index].setNickName(askStringConstructor("nick name"));
	contact[index].setLogin(askStringConstructor("login"));
	contact[index].setPostalAddress(askStringConstructor("postal Address"));
	contact[index].setEmail(askStringConstructor("email"));
	contact[index].setBirthdayDate(askStringConstructor("birthday date"));
	contact[index].setFavoriteMeal(askStringConstructor("favorite meal"));
	contact[index].setUnderwearColor(askStringConstructor("underwear color"));
	contact[index].setDarkestSecret(askStringConstructor("darkest secret"));
	contact[index].setPhoneNumber(askIntConstructor("phone number"));
}

bool Add::executeCommandAdd(Contact contacts[8], int indexContact, int highestIndexContact)
{
	if (indexContact <= highestIndexContact){
		Add::askingToFillContact(contacts, indexContact);
		return true;
	}
	else{
		std::cout << "Book of contact is full. Try another command!\n";
		return false;
	}
}


