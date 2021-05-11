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

#include "Include/PhoneBook.hpp"

std::string Search::getCorrectString(std::string str)
{
	std::string	spaceString;
	int			numberSpaces;
	int			width = 10;

	if (str.length() > width){
		return str.substr(0, width) + ".";
	}
	else{
		numberSpaces = width - static_cast <int> (str.length());
		spaceString = std::string(numberSpaces, ' ');
		return str + spaceString;
	}
}

void Search::printNameColumns(){
	std::string rowToPrint;
	rowToPrint = BLUE + getCorrectString("index")
					+ "|" + getCorrectString("first name")
					+ "|" + getCorrectString("last name")
					+ "|" + getCorrectString("nickname")
					+ "\n" + RESET;
	std::cout << rowToPrint;
}

void Search::printShortContactByIndex(Contact contact[8], int index){
	std::string rowToPrint;
	printNameColumns();
	rowToPrint = GREEN + getCorrectString(std::to_string(index)) + RESET;
	rowToPrint += "|" + getCorrectString(contact[index].firstName)
				+ "|" + getCorrectString(contact[index].lastName)
				+ "|" + getCorrectString(contact[index].nickName)
				+ "\n";
	std::cout << rowToPrint;
}

void Search::printFullContactByIndex(Contact contact[8], int index){
	std::string rowToPrint;
	rowToPrint = GREEN + getCorrectString(std::to_string(index)) + RESET;
	rowToPrint += "|" + getCorrectString(contact[index].firstName)
				+ "|" + getCorrectString(contact[index].lastName)
				+ "|" + getCorrectString(contact[index].nickName)
				+ "|" + getCorrectString(contact[index].login)
				+ "|" + getCorrectString(contact[index].postalAddress)
				+ "|" + getCorrectString(contact[index].email)
				+ "|" + getCorrectString(contact[index].birthdayDate)
				+ "|" + getCorrectString(contact[index].favoriteMeal)
				+ "|" + getCorrectString(contact[index].underwearColor)
				+ "|" + getCorrectString(contact[index].darkestSecret)
				+ "|" + getCorrectString(std::to_string(contact[index].phoneNumber))
				+ "\n";
	std::cout << rowToPrint;
}

int Search::getIndexOfContact(){
	int indexContact;

	std::string askString = "Write index of contact(0 - 7): ";
	std::cout << askString;
	indexContact = getIntFromInput();
	return (indexContact);
}

void Search::executeCommandSearch(Contact contacts[8], int indexContact){
	int indexContactToFullPrint = 0;

	for (int i = 0; i < indexContact; i++){
		printShortContactByIndex(contacts, i);
	}
	indexContactToFullPrint = getIndexOfContact();
	if (indexContactToFullPrint < indexContact){
		printFullContactByIndex(contacts, indexContactToFullPrint);
	}
	else{
		std::cout << "The '" + std::to_string(indexContactToFullPrint) + "' contact doesn't exist\n";
	}
}
