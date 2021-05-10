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

//#include <utility>

Contact::Contact(std::string firstName,
				std::string lastName,
				std::string nickName,
				std::string login,
				std::string postalAddress,
				std::string email,
				std::string birthdayDate,
				std::string favoriteMeal,
				std::string underwearColor,
				std::string darkestSecret,
				int phoneNumbre)
				:
		firstName(std::move(firstName)),
		lastName(std::move(lastName)),
		nickName(std::move(nickName)),
		login(std::move(login)),
		postalAddress(std::move(postalAddress)),
		email(std::move(email)),
		birthdayDate(std::move(birthdayDate)),
		favoriteMeal(std::move(favoriteMeal)),
		underwearColor(std::move(underwearColor)),
		darkestSecret(std::move(darkestSecret)),
		phoneNumbrer(phoneNumbre){

}
