/* **************************************************************************** */
/*                                                                      .       */
/*   Contact.hpp                                                       / V\     */
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


#ifndef CPP_0_CONTACT_HPP
#define CPP_0_CONTACT_HPP


#include <string>
#include <utility>

class Contact
{
public:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string login;
	std::string postalAddress;
	std::string email;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
	int phoneNumbrer;

	void setData(std::string firstName,
			std::string lastName,
			std::string nickName,
			std::string login,
			std::string postalAddress,
			std::string email,
			std::string birthdayDate,
			std::string favoriteMeal,
			std::string underwearColor,
			std::string darkestSecret,
			int phoneNumbre){
		this->firstName = std::move(firstName);
		this->lastName = std::move(lastName);
		this->nickName = std::move(nickName);
		this->login = std::move(login);
		this->postalAddress = std::move(postalAddress);
		this->email = std::move(email);
		this->birthdayDate = std::move(birthdayDate);
		this->favoriteMeal = std::move(favoriteMeal);
		this->underwearColor = std::move(underwearColor);
		this->darkestSecret = std::move(darkestSecret);
		this->phoneNumbrer = phoneNumbre;

	}
};

#endif
