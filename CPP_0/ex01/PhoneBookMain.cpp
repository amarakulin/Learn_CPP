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
//TODO make a name of row
bool validateNumberString(std::string strToValidate){
	for (int i = 0; i < strToValidate.length(); i++){
		if (!isdigit(strToValidate[i])){
			return false;
		}
	}
	return true;
}

std::string getNumberString(){
	std::string inputStr;
	bool isValidStr = false;

	while(!isValidStr){
		std::getline(std::cin, inputStr);
		if (validateNumberString(inputStr)){
			isValidStr = true;
		}
		else{
			std::cout << "The '" + inputStr + "' not a number. Try again: ";
		}
	}
	return inputStr;
}

int getIntFromInput(){
	int resultVariable;
	std::string inputStr;

	inputStr = getNumberString();
	resultVariable = std::stoi(inputStr);
	return resultVariable;
}

long getLongFromInput(){
	long resultVariable;
	std::string inputStr;
	std::string::size_type sz;

	inputStr = getNumberString();
	resultVariable = std::stol(inputStr, &sz, 10);
	return resultVariable;
}

int main(){
	Contact contacts[8];
	int indexContact = 0;
	int highestIndexContact = 7;
	std::string commandString;
	Add addCommand;
	Search searchCommand;
	while(commandString != "EXIT"){
		std::cout << "Write one of the following command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, commandString);
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
		}
		else{
			std::cout << "[-] Error: '" + commandString + "' " + " is invalid command. Try again:\n";
		}
	}
	return (0);
}