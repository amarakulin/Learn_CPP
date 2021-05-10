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


#include "Include/PhoneBook.hpp"

int main(){
	Contact contacts[8];
	int indexContact = 0;
	int highestIndexContact = 7;
	std::string commandString;
	Add addCommand;
	Search searchCommand;
	while(1){
		std::cout << "Write one of the following command (ADD, SEARCH, EXIT): ";
		std::cin >> commandString;
		if (commandString == "ADD"){
			if (addCommand.executeCommandAdd(contacts, indexContact, highestIndexContact)){
				indexContact++;
			}
		}
		else if (commandString == "SEARCH"){
			searchCommand.executeCommandSearch(contacts, indexContact);
		}
		else if (commandString == "EXIT"){
			std::cout << "Bye! Bye!\n";
			return (0);
		}
		else{
			std::cout << "[-] Error: '" + commandString + "' " + " is invalid command. Try again:\n";
		}
	}
}