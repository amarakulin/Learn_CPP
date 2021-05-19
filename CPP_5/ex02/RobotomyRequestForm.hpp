/* **************************************************************************** */
/*                                                                      .       */
/*   RobotomyRequestForm.hpp                                                        / V\     */
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


#ifndef CPP_5_ROBOTOMYREQUESTFORM_HPP
#define CPP_5_ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : virtual public Form{
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &assign);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;

private:
	RobotomyRequestForm();

};


#endif
