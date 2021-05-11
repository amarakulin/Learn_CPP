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

#include "PhoneBook.hpp"

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
	long phoneNumbrer;

	void setFirstName(const std::string &firstName);
	void setLastName(const std::string &lastName);
	void setNickName(const std::string &nickName);
	void setLogin(const std::string &login);
	void setPostalAddress(const std::string &postalAddress);
	void setEmail(const std::string &email);
	void setBirthdayDate(const std::string &birthdayDate);
	void setFavoriteMeal(const std::string &favoriteMeal);
	void setUnderwearColor(const std::string &underwearColor);
	void setDarkestSecret(const std::string &darkestSecret);
	void setPhoneNumber(long phoneNumber);
};

#endif
