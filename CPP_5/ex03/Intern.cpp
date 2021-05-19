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

const t_createFrom Intern::_arrFormStruct[] = {
		{.nameForm = "presidential pardon", .createFrom = createPPF},
		{.nameForm = "robotomy request", .createFrom = createRRF},
		{.nameForm = "shrubbery creation", .createFrom = createSF},
		{.nameForm = "", .createFrom = nullptr},
};

Intern::Intern(){
}

Intern::Intern(const Intern &copy){
	operator=(copy);
}

Intern &Intern::operator=(const Intern &assign){
	(void)assign;
	return *this;
}

Intern::~Intern(){

}

const char *Intern::wrongNameFormException::what() const throw(){
	return "Wrong name form";
}


Form *Intern::makeForm(const std::string &nameForm, const std::string &target){
	Form *fondForm = nullptr;
	for (int i = 0; _arrFormStruct[i].createFrom; i++){
		if (_arrFormStruct[i].nameForm == nameForm){
			std::cout << "Intern creates " << nameForm << std::endl;
			fondForm = _arrFormStruct[i].createFrom(target);
		}
	}
	if (!fondForm){
		throw Intern::wrongNameFormException();
	}
	return fondForm;
}

