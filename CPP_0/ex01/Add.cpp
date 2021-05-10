/* **************************************************************************** */
/*                                                                      .       */
/*   Speaker.cpp                                                       / V\     */
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


#include "Speaker.hpp"

void Speaker::askIndexOfContact(){
	std::string askString = "Write index of contact(1 - 8):\n";
	std::cout << askString;
}

std::string Speaker::askStringConstructor(const std::string& askVariable){
	std::string resultVariable;
	std::cout << "Write " + askVariable + ": ";
	std::cin >> resultVariable;
	std::cout << "\n";
	return resultVariable;
}

int Speaker::askIntConstructor(const std::string& askVariable)
{
	int resultVariable;
	std::cout << "Write " + askVariable + ": ";
	std::cin >> resultVariable;
	std::cout << "\n";
	return resultVariable;
}

void Speaker::askingToFillContact(Contact contact){
	contact.setFirstName(askStringConstructor("first name"));
	contact.setLastName(askStringConstructor("last name"));
	contact.setNickName(askStringConstructor("nick name"));
	contact.setLogin(askStringConstructor("login"));
	contact.setPostalAddress(askStringConstructor("postal Address"));
	contact.setEmail(askStringConstructor("email"));
	contact.setBirthdayDate(askStringConstructor("birthday date"));
	contact.setFavoriteMeal(askStringConstructor("favorite meal"));
	contact.setUnderwearColor(askStringConstructor("underwear color"));
	contact.setDarkestSecret(askStringConstructor("darkest secret"));
	contact.setPhoneNumber(askIntConstructor("phone number"));
}


