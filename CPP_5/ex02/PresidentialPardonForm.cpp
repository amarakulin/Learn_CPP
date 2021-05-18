/* **************************************************************************** */
/*                                                                      .       */
/*   PresidentialPardonForm.cpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/18/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(target, 25, 5){
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &copy){
	operator=(copy);
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &assign){
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}
