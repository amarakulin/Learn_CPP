/* **************************************************************************** */
/*                                                                      .       */
/*   RobotomyRequestForm.cpp                                                        / V\     */
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


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(target, 72, 45){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy){
	operator=(copy);
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &assign){
	(void)assign;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}


void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	Form::execute(executor);
	std::srand(std::time(NULL));
	int randIdx = rand() % 2;
	std::string actionsStrings[2] = {
			"*drilling noises*\n " + this->getName() +
			+ " has been robotomized successfully 50% of the time.",
			"Can't drilling the " + this->getName()};

	std::cout << actionsStrings[randIdx] << std::endl;
}

