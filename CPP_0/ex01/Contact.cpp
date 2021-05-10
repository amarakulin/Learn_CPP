/* **************************************************************************** */
/*                                                                      .       */
/*   Contact.cpp                                                       / V\     */
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

#include "Contact.hpp"

void Contact::setFirstName(const std::string &firstName){
	Contact::firstName = firstName;
}

void Contact::setLastName(const std::string &lastName){
	Contact::lastName = lastName;
}

void Contact::setNickName(const std::string &nickName){
	Contact::nickName = nickName;
}

void Contact::setLogin(const std::string &login){
	Contact::login = login;
}

void Contact::setPostalAddress(const std::string &postalAddress){
	Contact::postalAddress = postalAddress;
}

void Contact::setEmail(const std::string &email){
	Contact::email = email;
}

void Contact::setBirthdayDate(const std::string &birthdayDate){
	Contact::birthdayDate = birthdayDate;
}

void Contact::setFavoriteMeal(const std::string &favoriteMeal){
	Contact::favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor(const std::string &underwearColor){
	Contact::underwearColor = underwearColor;
}

void Contact::setDarkestSecret(const std::string &darkestSecret){
	Contact::darkestSecret = darkestSecret;
}

void Contact::setPhoneNumber(int phoneNumber){
	Contact::phoneNumbrer = phoneNumber;
}
