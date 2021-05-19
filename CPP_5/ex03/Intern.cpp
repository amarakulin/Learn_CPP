/* **************************************************************************** */
/*                                                                      .       */
/*   Intern.cpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/19/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

static Form *createPPF(const std::string &target){
	return (new PresidentialPardonForm(target));
}


static Form *createRRF(const std::string &target){
	return (new RobotomyRequestForm(target));
}


static Form *createSF(const std::string &target){
	return (new ShrubberyCreationForm(target));
}

Intern::Intern(){
	createFromStruct[0].nameForm = "presidential pardon";
	createFromStruct[1].nameForm = "robotomy request";
	createFromStruct[2].nameForm = "shrubbery creation";
	createFromStruct[0].createFrom = createPPF;
	createFromStruct[1].createFrom = createRRF;
	createFromStruct[2].createFrom = createSF;
}

Intern::Intern(const Intern &copy){
	operator=(copy);
}

Intern &Intern::operator=(const Intern &assign){
	if (this != &assign){
		for (int i = 0; i < 3; i++){
			this->createFromStruct[i] = assign.createFromStruct[i];
		}
	}
	return *this;
}

Intern::~Intern(){

}


Form *Intern::makeForm(const std::string &nameForm, const std::string &target){
	for (int i = 0; i < 3; i++){
		if (this->createFromStruct[i].nameForm == nameForm){
			return this->createFromStruct[i].createFrom(target);
		}
	}
	return NULL;
}

